// *********************************************************************************************************************
// file:
// author: Juan Pablo Crossley (crossleyjuan@gmail.com)
// created:
// updated:
// license:
// 
// This file is part of the djondb project, for license information please refer to the LICENSE file,
// the application and libraries are provided as-is and free of use under the terms explained in the file LICENSE
// Its authors create this application in order to make the world a better place to live, but you should use it on
// your own risks.
// 
// Also, be adviced that, the GPL license force the committers to ensure this application will be free of use, thus
// if you do any modification you will be required to provide it for free unless you use it for personal use (you may 
// charge yourself if you want), bare in mind that you will be required to provide a copy of the license terms that ensures
// this program will be open sourced and all its derivated work will be too.
// *********************************************************************************************************************

#include "util.h"

#include <iostream>
#include <sstream>
#include <sys/types.h>
#include <sys/stat.h>
#include "defs.h"
#include <stdlib.h>
#include <string.h>

#ifndef WINDOWS
#include <uuid/uuid.h>
#endif
#ifdef MAC
#include <mach/clock.h>
#include <mach/mach.h>
/*
#include <CoreFoundation/CoreFoundation.h>
#include <IOKit/IOKitLib.h>
#include <CoreServices/CoreServices.h>
*/
#endif
#ifdef WINDOWS
#include <Windows.h>
#include <Winuser.h>
#include <Rpc.h>
#include <direct.h>
#endif

bool _daemon;

DjondbException::DjondbException(int code, const char* error) {
	_errorCode = code;
	_errorMessage = error;
}

DjondbException::DjondbException(const DjondbException& orig) {
	this->_errorCode = orig._errorCode;
	this->_errorMessage = orig._errorMessage;
}

const char* DjondbException::what() const throw() {
	return _errorMessage;
}

int DjondbException::errorCode() const {
	return _errorCode;
}
void logInfo(char* text) {
    cout << text << endl;
}

std::string* uuid() {
#ifndef WINDOWS
    uuid_t t;
    uuid_generate(t);

    char ch[36];
    memset(ch, 0, 36);
    uuid_unparse(t, ch);
    string* res = new string(ch);
    return res;
#else
    UUID uuid;

    ::UuidCreate(&uuid);
    UCHAR* wszUuid = NULL;
    ::UuidToStringA(&uuid, &wszUuid);
    std::string res;
    if(wszUuid != NULL)
    {
        char* uuid = (char*)wszUuid;
        res = string(uuid);

        ::RpcStringFree(&wszUuid);
        wszUuid = NULL;
    }

    // removes the { } characters
    res = res.substr(1, res.size() - 2);
    return new string(res);
#endif
}


bool isDaemon() {
	return _daemon;
}

void setDaemon(bool daemon) {
	_daemon = daemon;
}
bool makedir(const char* path) {
#ifndef WINDOWS
    int status = mkdir(path, S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);
#else
    int status = mkdir(path);
#endif
    if (status != 0) {
        return false;
    } else {
        return true;
    }
}

std::string getTempDir() {
#ifndef WINDOWS
    string tmp("/tmp");
#else
    string tmp(getenv("TMP"));
#endif
    return tmp;
}

std::string* getHomeDir() {
#ifndef WINDOWS
    string* home = new string(getenv("HOME"));
#else
    std::string homeDrive = std::string(getenv("HOMEDRIVE"));
    std::string homePath = std::string(getenv("HOMEPATH"));
    string* home = new string(homeDrive + homePath);
#endif
    return home;
}

void* mmalloc(size_t size) {
    void* p = malloc(size);
    if (p == NULL) {
        cout << "Out of memory!!!" << endl;
        exit(EXIT_FAILURE);
    }
    return p;
}

Version getCurrentVersion() {
    return getVersion(PACKAGE_VERSION);
}

Version getVersion(const char* version) {
    return Version(std::string(version));
}

#ifdef MAC // OS X does not have clock_gettime, use clock_get_time
int clock_gettime(int X, struct timespec *tv) 
{
	clock_serv_t cclock;
	mach_timespec_t mts;
	host_get_clock_service(mach_host_self(), CALENDAR_CLOCK, &cclock);
	clock_get_time(cclock, &mts);
	mach_port_deallocate(mach_task_self(), cclock);
	tv->tv_sec = mts.tv_sec;
	tv->tv_nsec = mts.tv_nsec; 
	return 0;
}
#endif

#ifdef WINDOWS
LARGE_INTEGER getFILETIMEoffset()
{
	SYSTEMTIME s;
	FILETIME f;
	LARGE_INTEGER t;

	s.wYear = 1970;
	s.wMonth = 1;
	s.wDay = 1;
	s.wHour = 0;
	s.wMinute = 0;
	s.wSecond = 0;
	s.wMilliseconds = 0;
	SystemTimeToFileTime(&s, &f);
	t.QuadPart = f.dwHighDateTime;
	t.QuadPart <<= 32;
	t.QuadPart |= f.dwLowDateTime;
	return (t);
}

int clock_gettime(int X, struct timespec *tv)
{
	LARGE_INTEGER           t;
	FILETIME            f;
	double                  microseconds;
	static LARGE_INTEGER    offset;
	static double           frequencyToMicroseconds;
	static int              initialized = 0;
	static BOOL             usePerformanceCounter = 0;

	if (!initialized) {
		LARGE_INTEGER performanceFrequency;
		initialized = 1;
		usePerformanceCounter = QueryPerformanceFrequency(&performanceFrequency);
		if (usePerformanceCounter) {
			QueryPerformanceCounter(&offset);
			frequencyToMicroseconds = (double)performanceFrequency.QuadPart / 1000000.;
		} else {
			offset = getFILETIMEoffset();
			frequencyToMicroseconds = 10.;
		}
	}
	if (usePerformanceCounter) QueryPerformanceCounter(&t);
	else {
		GetSystemTimeAsFileTime(&f);
		t.QuadPart = f.dwHighDateTime;
		t.QuadPart <<= 32;
		t.QuadPart |= f.dwLowDateTime;
	}

	t.QuadPart -= offset.QuadPart;
	microseconds = (double)t.QuadPart / frequencyToMicroseconds;
	t.QuadPart = microseconds;
	tv->tv_sec = t.QuadPart / 1000000;
	tv->tv_nsec = t.QuadPart % 1000000000;
	return (0);
}
#endif

