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

static class TestDescription_suite_test_testLxCorrelation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testLxCorrelation() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 7, "testLxCorrelation" ) {}
 void runTest() { suite_test.testLxCorrelation(); }
} testDescription_suite_test_testLxCorrelation;

static class TestDescription_suite_test_testRxCorrelation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRxCorrelation() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 17, "testRxCorrelation" ) {}
 void runTest() { suite_test.testRxCorrelation(); }
} testDescription_suite_test_testRxCorrelation;

static class TestDescription_suite_test_testkxCorrelation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testkxCorrelation() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 27, "testkxCorrelation" ) {}
 void runTest() { suite_test.testkxCorrelation(); }
} testDescription_suite_test_testkxCorrelation;

static class TestDescription_suite_test_testStiffnessCoefficient : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testStiffnessCoefficient() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 50, "testStiffnessCoefficient" ) {}
 void runTest() { suite_test.testStiffnessCoefficient(); }
} testDescription_suite_test_testStiffnessCoefficient;

static class TestDescription_suite_test_testMeanCalculation : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testMeanCalculation() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 62, "testMeanCalculation" ) {}
 void runTest() { suite_test.testMeanCalculation(); }
} testDescription_suite_test_testMeanCalculation;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
