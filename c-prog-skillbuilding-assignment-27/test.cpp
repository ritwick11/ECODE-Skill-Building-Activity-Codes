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

static class TestDescription_suite_test_testSafeToStartTest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testSafeToStartTest() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 7, "testSafeToStartTest" ) {}
 void runTest() { suite_test.testSafeToStartTest(); }
} testDescription_suite_test_testSafeToStartTest;

static class TestDescription_suite_test_testBootOpenTest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testBootOpenTest() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 25, "testBootOpenTest" ) {}
 void runTest() { suite_test.testBootOpenTest(); }
} testDescription_suite_test_testBootOpenTest;

static class TestDescription_suite_test_testRightDoorsOpenTest : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRightDoorsOpenTest() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 42, "testRightDoorsOpenTest" ) {}
 void runTest() { suite_test.testRightDoorsOpenTest(); }
} testDescription_suite_test_testRightDoorsOpenTest;

static class TestDescription_suite_test_testSetMoodAfternoon : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testSetMoodAfternoon() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 59, "testSetMoodAfternoon" ) {}
 void runTest() { suite_test.testSetMoodAfternoon(); }
} testDescription_suite_test_testSetMoodAfternoon;

static class TestDescription_suite_test_testSetMoodDinner : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testSetMoodDinner() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 67, "testSetMoodDinner" ) {}
 void runTest() { suite_test.testSetMoodDinner(); }
} testDescription_suite_test_testSetMoodDinner;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
