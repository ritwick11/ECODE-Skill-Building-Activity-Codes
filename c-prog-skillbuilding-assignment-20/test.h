#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
    public :
        void testToggleVolumeButton(void)
        {
            struct VolumeButtonStruct vB = {.currentStatus = Off, .volumeLevel = 0};
            ToggleVolumeButtonStruct(&vB);
            TS_ASSERT(vB.currentStatus == On);
            TS_ASSERT(vB.volumeLevel == 0);
            TS_TRACE("Test to toggle volume button");
        }

        void testRotateKnobClockwise(void)
        {
            struct VolumeButtonStruct vB = {.currentStatus = On, .volumeLevel = 4};
            RotateVolumeButtonClockStruct(&vB);
            TS_ASSERT(vB.currentStatus == On);
            TS_ASSERT(vB.volumeLevel == 5);
            TS_TRACE("Test to rotate knob clockwise");
        }

        void testRotateKnobAntiClockwise(void)
        {
            struct VolumeButtonStruct vB = {.currentStatus = On, .volumeLevel = 7};
            RotateVolumeButtonAntiClockStruct(&vB);
            TS_ASSERT(vB.currentStatus == On);
            TS_ASSERT(vB.volumeLevel == 6);
            TS_TRACE("Test to rotate knob anticlockwise");
        }

        void testToggleVolumeButtonBitFields(void)
        {
            struct VolumeButtonBitFields vbF = {.currentStatus = Off, .volumeLevel = 0};
            ToggleVolumeButtonBitFields(&vbF);
            TS_ASSERT(vbF.currentStatus == On);
            TS_ASSERT(vbF.volumeLevel == 0);
            TS_TRACE("Test to toggle volume button");
        }

        void testRotateKnobClockwiseBitFields(void)
        {
            struct VolumeButtonBitFields vbF = {.currentStatus = On, .volumeLevel = 0};
            RotateVolumeButtonClockBitFields(&vbF);
            TS_ASSERT(vbF.currentStatus == On);
            TS_ASSERT(vbF.volumeLevel == 1);
            TS_TRACE("Test to rotate knob clockwise");
        }

        void testRotateKnobAntiClockwiseBitFields(void)
        {
            struct VolumeButtonBitFields vbF = {.currentStatus = On, .volumeLevel = 8};
            RotateVolumeButtonAntiClockBitFields(&vbF);
            TS_ASSERT(vbF.currentStatus == On);
            TS_ASSERT(vbF.volumeLevel == 7);
            TS_TRACE("Test to rotate knob anticlockwise");
        }

        void testToggleVolumeButtonArray(void)
        {
            int volume[2] = {On, 4};
            ToggleVolumeButtonArray(volume, 2);
            TS_ASSERT(volume[0] == Off);
            TS_ASSERT(volume[1] == 4);
            TS_TRACE("Test to toggle volume button");
        }

        void testRotateKnobClockwiseArray(void)
        {
            int volume[2] = {On, 9};
            RotateVolumeButtonClockArray(volume, 2);
            TS_ASSERT(volume[0] == On);
            TS_ASSERT(volume[1] == 10);
            TS_TRACE("Test to rotate knob clockwise");
        }

        void testRotateKnobAntiClockwiseArray(void)
        {
            int volume[2] = {On, 2};
            RotateVolumeButtonAntiClockArray(volume, 2);
            TS_ASSERT(volume[0] == On);
            TS_ASSERT(volume[1] == 1);
            TS_TRACE("Test to rotate knob anticlockwise");
        }

        void testToggleVolumeButtonVariables(void)
        {
            int status = Off, volume = 3;
            ToggleVolumeButtonVariables(&status);
            TS_ASSERT(status == On);
            TS_ASSERT(volume == 3);
            TS_TRACE("Test to toggle volume button");
        }

        void testRotateKnobClockwiseVariables(void)
        {
            int status = On, volume = 3;
            RotateVolumeButtonClockVariables(&status, &volume);
            TS_ASSERT(status == On);
            TS_ASSERT(volume == 4);
            TS_TRACE("Test to rotate knob clockwise");
        }

        void testRotateKnobAntiClockwiseVariables(void)
        {
            int status = On, volume = 6;
            RotateVolumeButtonAntiClockVariables(&status, &volume);
            TS_ASSERT(status == On);
            TS_ASSERT(volume == 5);
            TS_TRACE("Test to rotate knob anticlockwise");
        }
};

