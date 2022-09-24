#include <iostream>
#include <list>
#include <cppunit/TestCase.h>
#include <cppunit/TestFixture.h>
#include <cppunit/ui/text/TextTestRunner.h>
#include <cppunit/extensions/HelperMacros.h>
#include <cppunit/extensions/TestFactoryRegistry.h>
#include <cppunit/TestResult.h>
#include <cppunit/TestResultCollector.h>
#include <cppunit/TestRunner.h>
#include <cppunit/BriefTestProgressListener.h>
#include <cppunit/CompilerOutputter.h>
#include <netinet/in.h>
#include "menu.cpp"
#include "func1.cpp"
#include "func2.cpp"
#include "func3.cpp"
#include "header.hpp"


using namespace CppUnit;
using namespace std;

class test: public CppUnit::TestFixture
{	
	CPPUNIT_TEST_SUITE(test);
	CPPUNIT_TEST(test_register_supplier);
	CPPUNIT_TEST(test_edit_supplier_details);
	CPPUNIT_TEST(test_register_customer);
	CPPUNIT_TEST_SUITE_END();
	
	public:
		void setUp(void);
		void tearDown(void);
	protected:
		void test_register_supplier(void);
		void test_edit_supplier_details(void);
		void test_register_customer(void);
	private:
		supplier *myobj1;
		customer *myobj2;
};

void test::test_register_supplier(void)
{
	CPPUNIT_ASSERT(1==myobj1->register_supplier());
}

void test::test_edit_supplier_details(void)
{
	CPPUNIT_ASSERT(1==myobj1->edit_supplier_details());
}

void test::test_register_customer(void)
{
	CPPUNIT_ASSERT(1==myobj2->register_customer());
}
void test::setUp(void)
{
	myobj1=new supplier();
	myobj2=new customer();
}

void test::tearDown(void)
{
	delete myobj1;
	delete myobj2;
}

CPPUNIT_TEST_SUITE_REGISTRATION(test);

int main(int argc,char* argv[])
{
	CPPUNIT_NS::TestResult testresult;
	CPPUNIT_NS::TestResultCollector collectedresults;
	testresult.addListener(&collectedresults);
	CPPUNIT_NS::BriefTestProgressListener progress;
	testresult.addListener(&progress);
	CPPUNIT_NS::TestRunner testrunner;
	testrunner.addTest(CPPUNIT_NS::TestFactoryRegistry::getRegistry().makeTest());
	testrunner.run(testresult);
	CPPUNIT_NS::CompilerOutputter compileroutputter(&collectedresults,std::cerr);
	compileroutputter.write();
	return collectedresults.wasSuccessful()?0:1;

}



