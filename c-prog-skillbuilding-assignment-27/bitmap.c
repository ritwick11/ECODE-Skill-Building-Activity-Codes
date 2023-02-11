#include "bitmap.h"


/*
Determine whether it is safe or unsafe to start the car
*/
enum CarStart CarSafeToStart(struct CarPropertiesStatus c)
{
	if(c.LeftRearDoor ==  Closed && c.RightFrontDoor == Closed && c.LeftRearDoor == Closed && c.RightRearDoor == Closed && c.Boot == Closed)
        {
            if(c.HandBrake == Closed && c.Headlights == Off && c.Gear == Parking)
            return Safe;
        }
    else
        return Unsafe;
}


/* 
Display the status of different car properties. 
Also display the size of structure received
*/

void ShowCarProperties(struct CarPropertiesStatus c)
{

}
/*
Create structure variable inside the function 
Set the T.hour value , Determine headlight status
and NewsMusic (as per Table 3) in TimeMood structure
*/
struct TimeMood SetTimeMood(UINT hour)
{	
    struct TimeMood T;

    if(hour >= 6 && hour <= 8)
    {
        T.HeadLight = Off;
        T.Nm.News = WorldNews;
    }
    if(hour >= 9 && hour <= 12)
    {
        T.HeadLight = Off;
        T.Nm.News = CityNews;
    }
    if(hour >= 13 && hour <= 15)
    {
        T.HeadLight = Off;
        T.Nm.News = EconomicNews;
    }
    if(hour >= 16 && hour <= 18)
    {
        T.HeadLight = Off;
        T.Nm.News = SportsNews;
    }
    if(hour >= 19 && hour <= 21)
    {
        T.HeadLight = On;
        T.Nm.Music = LightClassical;
    }
    if(hour >= 22 && hour <= 00)
    {
        T.HeadLight = On;
        T.Nm.Music = OldHindi;
    }
    if(hour >= 1 && hour <= 3)
    {
        T.HeadLight = On;
        T.Nm.Music = Ghazal;
    }
    if(hour >= 4 && hour <= 5)
    {
        T.HeadLight = On;
        T.Nm.Music = Rock;
    }
    return T;
}

/*
Display the T.hour, headlight status and news / music values
in the structure passed to it. Also display sizes of structure
received and the news/music component of it.
*/
void ShowTimeMood(struct TimeMood t)
{
	
}

