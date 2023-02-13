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

static class TestDescription_suite_test_testToggleVolumeButton : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testToggleVolumeButton() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 7, "testToggleVolumeButton" ) {}
 void runTest() { suite_test.testToggleVolumeButton(); }
} testDescription_suite_test_testToggleVolumeButton;

static class TestDescription_suite_test_testRotateKnobClockwise : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobClockwise() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 16, "testRotateKnobClockwise" ) {}
 void runTest() { suite_test.testRotateKnobClockwise(); }
} testDescription_suite_test_testRotateKnobClockwise;

static class TestDescription_suite_test_testRotateKnobAntiClockwise : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobAntiClockwise() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 25, "testRotateKnobAntiClockwise" ) {}
 void runTest() { suite_test.testRotateKnobAntiClockwise(); }
} testDescription_suite_test_testRotateKnobAntiClockwise;

static class TestDescription_suite_test_testToggleVolumeButtonBitFields : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testToggleVolumeButtonBitFields() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 34, "testToggleVolumeButtonBitFields" ) {}
 void runTest() { suite_test.testToggleVolumeButtonBitFields(); }
} testDescription_suite_test_testToggleVolumeButtonBitFields;

static class TestDescription_suite_test_testRotateKnobClockwiseBitFields : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobClockwiseBitFields() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 43, "testRotateKnobClockwiseBitFields" ) {}
 void runTest() { suite_test.testRotateKnobClockwiseBitFields(); }
} testDescription_suite_test_testRotateKnobClockwiseBitFields;

static class TestDescription_suite_test_testRotateKnobAntiClockwiseBitFields : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobAntiClockwiseBitFields() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 52, "testRotateKnobAntiClockwiseBitFields" ) {}
 void runTest() { suite_test.testRotateKnobAntiClockwiseBitFields(); }
} testDescription_suite_test_testRotateKnobAntiClockwiseBitFields;

static class TestDescription_suite_test_testToggleVolumeButtonArray : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testToggleVolumeButtonArray() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 61, "testToggleVolumeButtonArray" ) {}
 void runTest() { suite_test.testToggleVolumeButtonArray(); }
} testDescription_suite_test_testToggleVolumeButtonArray;

static class TestDescription_suite_test_testRotateKnobClockwiseArray : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobClockwiseArray() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 70, "testRotateKnobClockwiseArray" ) {}
 void runTest() { suite_test.testRotateKnobClockwiseArray(); }
} testDescription_suite_test_testRotateKnobClockwiseArray;

static class TestDescription_suite_test_testRotateKnobAntiClockwiseArray : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobAntiClockwiseArray() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 79, "testRotateKnobAntiClockwiseArray" ) {}
 void runTest() { suite_test.testRotateKnobAntiClockwiseArray(); }
} testDescription_suite_test_testRotateKnobAntiClockwiseArray;

static class TestDescription_suite_test_testToggleVolumeButtonVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testToggleVolumeButtonVariables() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 88, "testToggleVolumeButtonVariables" ) {}
 void runTest() { suite_test.testToggleVolumeButtonVariables(); }
} testDescription_suite_test_testToggleVolumeButtonVariables;

static class TestDescription_suite_test_testRotateKnobClockwiseVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobClockwiseVariables() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 97, "testRotateKnobClockwiseVariables" ) {}
 void runTest() { suite_test.testRotateKnobClockwiseVariables(); }
} testDescription_suite_test_testRotateKnobClockwiseVariables;

static class TestDescription_suite_test_testRotateKnobAntiClockwiseVariables : public CxxTest::RealTestDescription {
public:
 TestDescription_suite_test_testRotateKnobAntiClockwiseVariables() : CxxTest::RealTestDescription( Tests_test, suiteDescription_test, 106, "testRotateKnobAntiClockwiseVariables" ) {}
 void runTest() { suite_test.testRotateKnobAntiClockwiseVariables(); }
} testDescription_suite_test_testRotateKnobAntiClockwiseVariables;

#include <cxxtest/Root.cpp>
const char* CxxTest::RealWorldDescription::_worldName = "cxxtest";
