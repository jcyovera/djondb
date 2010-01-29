/* 
 * File:   Request.cpp
 * Author: cross
 * 
 * Created on November 24, 2009, 8:23 PM
 */

#include <string.h>
#include <stdlib.h>
#include <string>
#include "request.h"
#include "util.h"

char* getData(const char* data, int offset, int size) {
//    char *result = (char*)malloc(size*sizeof(char));
//    memset(result, 0, size);
    char* result = (char*)malloc(size+1);
    memset(result, 0, size+1);
    int pos = 0;
    for (int x = offset; x < (offset + size); x++) {
        result[pos++] = data[x];
    }
    return result;
}

Request::Request(const char* data) {
    Logger* log = getLogger(NULL);

    parameters = new map<string, string*>();

    log->debug(string("data: ") + data);
    char *readed = getData(data, 0, 4);

    type = atoi(readed);

    free(readed);
    
    int pos = 4;
    while (true) {
        readed = getData(data, pos, 4);
        pos += 4;
        if (strcmp(readed, "FFFF") != 0) {
            string* codename = new string(readed);
            trim(codename);
            if (log->isDebug()) log->debug("codename: " + *codename);
            char* csize = getData(data, pos, 2);
            pos += 2;
            int size = atoi(csize);
            if (log->isDebug()) log->debug("size: " + toString(size));
            char* cvalue = getData(data, pos, size);
            if (log->isDebug()) log->debug("value: " + string(cvalue));
            pos += size;
            addParameter(*codename, new string(cvalue));
            delete(codename);
            free(cvalue);
            free(csize);
            free(readed);
        } else {
            free(readed);
            break;
        }
    }

    delete(log);
};

void Request::addParameter(string codename, string* value) {
    parameters->insert(pair<string, string*>(codename, value));
};


int Request::getType() {
    return type;
};

string* Request::getParameter(string codename) {
    return parameters->find(codename)->second;
};

vector<string>* Request::getCodeNames() {
    vector<string>* result = new vector<string>();
    map<string,string*>::iterator it;
    for (it = parameters->begin(); it != parameters->end(); it++) {
        result->push_back(it->first);
    }
    return result;
};

Request::~Request() {
    for (map<string, string*>::iterator iter = parameters->begin(); iter != parameters->end(); iter++) {
        delete(iter->second);
    }
    parameters->clear();
    delete(parameters);
}
