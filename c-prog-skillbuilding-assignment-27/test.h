#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
    public :
        void testSafeToStartTest(void)
        {
            struct CarPropertiesStatus c = {
	        	.LeftFrontDoor = Closed, 
                .RightFrontDoor = Closed, 
                .LeftRearDoor = Closed, 
                .RightRearDoor = Closed, 
                .Boot = Closed, 
                .HandBrake = Closed, 
                .Headlights = Off, 
                .Gear = Parking
	        };
            
            enum CarStart CarSafe = CarSafeToStart(c);
            TS_ASSERT(CarSafe == Safe);
            TS_TRACE("Test when car is safe for starting");
        }
        
        void testBootOpenTest(void)
        {
            struct CarPropertiesStatus c = {
	        	.LeftFrontDoor = Closed, 
                .RightFrontDoor = Closed, 
                .LeftRearDoor = Closed, 
                .RightRearDoor = Closed, 
                .Boot = Open, 
                .HandBrake = Closed, 
                .Headlights = Off, 
                .Gear = Parking
	        };
            enum CarStart CarSafe = CarSafeToStart(c);
            TS_ASSERT(CarSafe == Unsafe);
            TS_TRACE("Test when car boot is open");
        }

        void testRightDoorsOpenTest(void)
        {
            struct CarPropertiesStatus c = {
	        	.LeftFrontDoor = Closed, 
                .RightFrontDoor = Open, 
                .LeftRearDoor = Closed, 
                .RightRearDoor = Open, 
                .Boot = Closed, 
                .HandBrake = Closed, 
                .Headlights = On, 
                .Gear = Parking
	        };
            enum CarStart CarSafe = CarSafeToStart(c);
            TS_ASSERT(CarSafe == Unsafe);
            TS_TRACE("Test when right car doors are open");
        }

        void testSetMoodAfternoon(void)
        {
            struct TimeMood tm = SetTimeMood(13);
            TS_ASSERT(tm.HeadLight == Off);
            TS_ASSERT(tm.Nm.News == EconomicNews);
            TS_TRACE("Test time mood setting in the afternoon");
        }

        void testSetMoodDinner(void)
        {
            struct TimeMood tm = SetTimeMood(19);
            TS_ASSERT(tm.HeadLight == On);
            TS_ASSERT(tm.Nm.Music == LightClassical);
            TS_TRACE("Test time mood setting during dinner time");
        }
};
