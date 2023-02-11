/* Generated file, do not edit */

#ifndef CXXTEST_RUNNING
#define CXXTEST_RUNNING
#endif

#define _CXXTEST_HAVE_STD
#include <cxxtest/TestListener.h>
#include <cxxtest/TestTracker.h>
#include <cxxtest/TestRunner.h>
#include <cxxtest/RealDescriptions.h>
#include <cxxtest/TestMain.h>
#include <cxxtest/ErrorPrinter.h>

int main( int argc, char *argv[] ) {
 int status;
    CxxTest::ErrorPrinter tmp;
    CxxTest::RealWorldDescription::_worldName = "cxxtest";
    status = CxxTest::Main< CxxTest::ErrorPrinter >( tmp, argc, argv );
    return status;
}
bool suite_test_init = false;
#include "test.h"

static test suite_test;

static CxxTest::List Tests_test = { 0, 0 };
CxxTest::StaticSuiteDescription suiteDescription_test( "test.h", 4, "test", suite_test, Tests_test );

static class TestDescription_suite_test_testOne : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testOne() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 7, "testOne" ) {}
 void runTest() { suite_test.testOne(); }
} testDescription_suite_test_testOne;

static class TestDescription_suite_test_testTwo : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testTwo() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 14, "testTwo" ) {}
 void runTest() { suite_test.testTwo(); }
} testDescription_suite_test_testTwo;

static class TestDescription_suite_test_testThree : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testThree() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 22, "testThree" ) {}
 void runTest() { suite_test.testThree(); }
} testDescription_suite_test_testThree;

static class TestDescription_suite_test_testFour : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testFour() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 30, "testFour" ) {}
 void runTest() { suite_test.testFour(); }
} testDescription_suite_test_testFour;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
