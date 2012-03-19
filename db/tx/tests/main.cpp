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

#include <iostream>
#include <defs.h>
#include <stdlib.h>
#include <string.h>
#include <cpptest.h>
//#include <memory>

#include "tx.h"
#include "bson.h"
#include "insertcommand.h"
#include "findcommand.h"

using namespace std;

class TestTXSuite: public Test::Suite
{
public:
    TestTXSuite()
    {
		 TEST_ADD(TestTXSuite::testInsert);
	 }
private:

private:
	 void testInsert()
	 {
		 Transaction* tran = TransactionManager::transactionManager()->beginTransaction();

		 BSONObj obj;
		 obj.add("name", "John");
		 obj.add("lastName", "Smith");

		 InsertCommand cmd;
		 cmd.setNameSpace("test");
		 cmd.setBSON(obj);

		 tran->insert(&cmd);

		 BSONObj* filter = BSONParser::parse("{ name: 'John'}");
		 FindCommand find;
		 find.setNameSpace("test");
		 find.setBSON(*filter);

		 std::vector<BSONObj*> res = tran->find(&find);
		 delete filter;
		 TEST_ASSERT(res.size() == 1);
		 BSONObj* resObj = res[0];
		 TEST_ASSERT(resObj->has("name"));
		 TEST_ASSERT(resObj->getString("name")->compare("John") == 0);
	 }

};

enum OutputType
{
	Compiler,
	Html,
	TextTerse,
	TextVerbose
};

	static void
usage()
{
	cout << "usage: mytest [MODE]\n"
		<< "where MODE may be one of:\n"
		<< "  --compiler\n"
		<< "  --html\n"
		<< "  --text-terse (default)\n"
		<< "  --text-verbose\n";
	exit(0);
}

	static auto_ptr<Test::Output>
cmdline(int argc, char* argv[])
{
	if (argc > 2)
		usage(); // will not return

	Test::Output* output = 0;

	if (argc == 1)
		output = new Test::TextOutput(Test::TextOutput::Verbose);
	else
	{
		const char* arg = argv[1];
		if (strcmp(arg, "--compiler") == 0)
			output = new Test::CompilerOutput;
		else if (strcmp(arg, "--html") == 0)
			output =  new Test::HtmlOutput;
		else if (strcmp(arg, "--text-terse") == 0)
			output = new Test::TextOutput(Test::TextOutput::Terse);
		else if (strcmp(arg, "--text-verbose") == 0)
			output = new Test::TextOutput(Test::TextOutput::Verbose);
		else
		{
			cout << "invalid commandline argument: " << arg << endl;
			usage(); // will not return
		}
	}

	return auto_ptr<Test::Output>(output);
}

// Main test program
//
int main(int argc, char* argv[])
{
	try
	{
		// Demonstrates the ability to use multiple test suites
		//
		Test::Suite ts;
		ts.add(auto_ptr<Test::Suite>(new TestTXSuite));

		// Run the tests
		//
		auto_ptr<Test::Output> output(cmdline(argc, argv));
		ts.run(*output, true);

		Test::HtmlOutput* const html = dynamic_cast<Test::HtmlOutput*>(output.get());
		if (html)
			html->generate(cout, true, "MyTest");
	}
	catch (...)
	{
		cout << "unexpected exception encountered\n";
		return EXIT_FAILURE;
	}
	return EXIT_SUCCESS;
}
