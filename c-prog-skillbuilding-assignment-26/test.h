#include <cxxtest/TestSuite.h>
#include "bitmap.h"

struct ClimateControlSystem Data[SIZE]={
    {28,HOT,AUTO,22}, 
    {30,RAINY,MANUAL,24}, 
    {32,COLD,AUTO,25},
    {36,HUMID,MANUAL,26},
    {40,COLD,AUTO,24}
};

class SampleTestSuite : public CxxTest::TestSuite
{
    public:

        //Test RequiredFanSpeed functionality
        void testOne( void )
        {
            enum FAN_SPEED ans = RequiredFanSpeed (&Data[0]);
            TS_ASSERT( ans == HIGH );
            TS_TRACE("testOne");
        }

        //Test TotalBatteryDrain functionality
        void testTwo( void )
        {
            int ans = TotalBatteryDrain (Data);
            TS_ASSERT( ans == 44 );
            TS_TRACE("testTwo");
        }

        //Test IsSystemShutdownRequired functionality
        void testThree( void )
        {
            bool ans = IsSystemShutdownRequired(Data);
            TS_ASSERT( !ans );
            TS_TRACE("testThree");
        }

        //Test HighestTempDifference functionality
        void testFour( void )
        {
            int ans = HighestTempDifference(Data,MANUAL,HOT);
            TS_ASSERT( ans == -1 );
            TS_TRACE("testFour");
        }
        
        //Test RequiredFanSpeed functionality
        void testFive( void )
        {
            enum FAN_SPEED ans = RequiredFanSpeed (&Data[1]);
            TS_ASSERT( ans == MEDIUM );
            TS_TRACE("testFive");
        }

        //Test HighestTempDifference functionality
        void testSix( void )
        {
            int ans = HighestTempDifference(Data,AUTO,COLD);
            TS_ASSERT( ans == 16 );
            TS_TRACE("testSix");
        }



};



