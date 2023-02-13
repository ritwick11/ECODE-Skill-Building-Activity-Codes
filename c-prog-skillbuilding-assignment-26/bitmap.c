#include "bitmap.h"
//Function MACROS

//Define the function to calculate FAN_SPEED required as per the conditions in the problem statement 

enum FAN_SPEED RequiredFanSpeed( struct ClimateControlSystem* reading){
    int tempDiff=0;

    (reading -> tempReading > reading -> desiredTempReading) ? (tempDiff = (reading -> tempReading - reading -> desiredTempReading)) : tempDiff = -1;
    
    if(tempDiff >=0 && tempDiff <=5)
    {
        if(reading -> weatherReading == HOT || reading -> weatherReading == HUMID)
            return MEDIUM;
        if(reading -> weatherReading == RAINY || reading -> weatherReading == COLD)
            return LOW;
    }

    else if(tempDiff >=6 && tempDiff <=10)
    {
        if(reading -> weatherReading == HOT || reading -> weatherReading == HUMID)
            return HIGH;
        if(reading -> weatherReading == RAINY)
            return MEDIUM;
        if(reading -> weatherReading == COLD)
            return LOW;
    }
    
    else if(tempDiff > 10)
    {
        if(reading -> weatherReading == HOT || reading -> weatherReading == HUMID)
            return HIGH;
        if(reading -> weatherReading == RAINY || reading -> weatherReading == COLD)
            return MEDIUM;
    }
}

//Define the function to calculate total battery drain as per the conditions in the problem statement 
int TotalBatteryDrain(struct ClimateControlSystem Data [SIZE] ){
    int tempDiff = 0;
    int totalDrain = 0;
    for(int i=0; i<SIZE; i++)
    {
        (Data[i].tempReading>Data[i].desiredTempReading) ? (tempDiff=(Data[i].tempReading-Data[i].desiredTempReading)) : tempDiff = -1;
        if(Data[i].weatherReading==HOT)
        {
            if(tempDiff>=0 && tempDiff<=5)
                totalDrain += 1;
            if(tempDiff>=6 && tempDiff<=10)
                totalDrain += 2;
            if(tempDiff>10)
                totalDrain += 4;            
        }
        else if(Data[i].weatherReading==HUMID)
        {
            if(tempDiff>=0 && tempDiff<=5)
                totalDrain += 2;
            if(tempDiff>=6 && tempDiff<=10)
                totalDrain += 4;
            if(tempDiff>10)
                totalDrain += 8;
        } 
        else if(Data[i].weatherReading==RAINY)
        {
            if(tempDiff>=0 && tempDiff<=5)
                totalDrain += 4;
            if(tempDiff>=6 && tempDiff<=10)
                totalDrain += 8;
            if(tempDiff>10)
                totalDrain += 16;
        } 
        else if(Data[i].weatherReading==COLD)
        {
            if(tempDiff>=0 && tempDiff<=5)
                totalDrain += 5;
            if(tempDiff>=6 && tempDiff<=10)
                totalDrain += 10;
            if(tempDiff>10)
                totalDrain += 20;
        }
    }
    return totalDrain;
}


//Define the function to determine if system shutdown is required as per the conditions in the problem statement 
bool IsSystemShutdownRequired(  struct ClimateControlSystem Data [SIZE]  ){
   int countTemp=0;
   int countMode=0;
   for(int i=0; i<SIZE; i++)
   {
        if((Data[i].tempReading-Data[i].desiredTempReading)>10)
            countTemp++;
   }
   for(int i=0; i<SIZE; i++)
   {
        if((Data[i].systemMode == MANUAL))
            countMode++;
   }

   if((countTemp == SIZE) || (countTemp >=3 && countMode >=3))
        return true;
    else
        return false;
}

//Define the function to calculate highest temperature differnce(absolute value) as per the conditions in the problem statement for the passed arguments
int HighestTempDifference( struct ClimateControlSystem Data [SIZE], enum MODE opMode, enum WEATHER weather){

    int diff=0;
    for(int i=0; i<SIZE; i++)
    {
        if(Data[i].systemMode==opMode && Data[i].weatherReading==weather)
        {
            ((Data[i].tempReading - Data[i].desiredTempReading)>diff) ? (diff = Data[i].tempReading - Data[i].desiredTempReading) : diff = 0;
        }
    }
    if(diff>0)
        return diff;
    else
        return -1;
}