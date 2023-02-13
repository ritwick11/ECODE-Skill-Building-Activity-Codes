#ifndef BITMAP_H
#define BITMAP_H

#include <stdio.h>
#include <stdbool.h>
#include<math.h>

//SIZE MACRO
#define SIZE 5    

//weather type categories
enum WEATHER{
   HOT,
   HUMID,
   RAINY,
   COLD
};

//MODE rating categories
enum MODE{
   AUTO,
   MANUAL
};

//fan speed categories
enum FAN_SPEED{
   LOW,
   MEDIUM,
   HIGH
};

//Data Model structure
struct ClimateControlSystem
{
   int tempReading;
   enum WEATHER weatherReading;
   enum MODE  systemMode;
   int desiredTempReading;
};



//Function MACROS

enum FAN_SPEED RequiredFanSpeed( struct ClimateControlSystem* reading);

int TotalBatteryDrain(struct ClimateControlSystem Data [SIZE] );

bool IsSystemShutdownRequired(  struct ClimateControlSystem Data [SIZE]  );

int HighestTempDifference( struct ClimateControlSystem Data [SIZE], enum MODE opMode, enum WEATHER weather );

#endif
