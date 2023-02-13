
#include <stdio.h>
#include "bitmap.h"



/******    Task 1: Implementation Using Simple Variables       ******/

/*  
If volume button is on, increments the value of volume level by 1, 
every time it is called. Volume level limits are (1 to 10). If the 
volume level greater than 10 then it should be considered as 10.*/
void RotateVolumeButtonClockVariables(int* status, int* volume)
{
    if(*status == On && (*volume>=1 && *volume<=10)){
        *volume = *volume + 1;
    }
    if(*volume>10){
        *volume = 10;
    }
}

/* 
If volume button is on, decrements the value of volume level by 1, 
every time it is called*/
void RotateVolumeButtonAntiClockVariables(int* status, int* volume)
{
    if(*status==On){
        *volume = *volume - 1;
    }
}

/*  Toggles the status of the volume button - turns it on if it's off, 
and turns it off if it's on   */
void ToggleVolumeButtonVariables(int* status)
{
    
    if(status[0]==On){
        status[0]=Off;
    }
    if(status[0]==Off){
        status[0]=On;
    }
    
}

/*  Displays the current status of volume button and its volume level  */

void ShowCurrentVolumeVariables(int* status, int* volume)
{
    printf("currentStatus == %d",*status);
    printf("volumeLevel == %d",*volume);
}


/******    Task 2: Implementation Using Array Variables      ******/

/*  
If volume button is on, increments the value of volume level by 1, 
every time it is called. Volume level limits are (1 to 10). If the 
volume level greater than 10 then it should be considered as 10.*/
void RotateVolumeButtonClockArray(int* volume, int size)
{
    if(volume[0]==On && (volume[1]>=1 && volume[1]<=10)){
        volume[1] = volume[1] + 1;
    }
    if(volume[1]>10){
        volume[1] = 10;
    }
}

/* 
If volume button is on, decrements the value of volume level by 1, 
every time it is called*/
void RotateVolumeButtonAntiClockArray(int* volume, int size)
{
	if(volume[0]==On){
        volume[1] = volume[1] - 1;
    }
}

/*  Toggles the status of the volume button - turns it on if it's off, 
and turns it off if it's on   */
void ToggleVolumeButtonArray(int* volume, int size)
{
	if(volume[0]==On){
        volume[0] = Off;
    }
    else{
        volume[0] = On;
    }
}

/*  Displays the current status of volume button and its volume level  */
void ShowCurrentVolumeArray(int* volume, int size)
{
    printf("currentStatus == %d",volume[0]);
    printf("volumeLevel == %d",volume[1]);
}


/******   Task 3: Implementation Using structure Variables      ******/

/*  
If volume button is on, increments the value of volume level by 1, 
every time it is called. Volume level limits are (1 to 10). If the 
volume level greater than 10 then it should be considered as 10.*/
void RotateVolumeButtonClockStruct(struct VolumeButtonStruct* vB)
{
	if(vB->currentStatus == On && vB->volumeLevel<=10){
        vB->volumeLevel = vB->volumeLevel + 1;
    }
    if(vB->volumeLevel>10){
        vB->volumeLevel = 10;
    }
}

/* 
If volume button is on, decrements the value of volume level by 1, 
every time it is called*/
void RotateVolumeButtonAntiClockStruct(struct VolumeButtonStruct* vB)
{
	if(vB->currentStatus == On) {
        vB->volumeLevel = vB->volumeLevel - 1;
    }
}

/* Toggles the status of the volume button - turns it on if it's off, 
and turns it off if it's on   */
void ToggleVolumeButtonStruct(struct VolumeButtonStruct* vB)
{
	if(vB->currentStatus == On){
        vB->currentStatus = Off;
    }
    else{
        vB->currentStatus = On;
    }
}

/* Displays the current status of volume button and its volume level  */
void ShowCurrentVolumeStruct(struct VolumeButtonStruct vB)
{

}


/******  Task 4: Implementation Using Bitfield   ******/

/*  
If volume button is on, increments the value of volume level by 1, 
every time it is called. Volume level limits are (1 to 10). If the 
volume level greater than 10 then it should be considered as 10.*/
void RotateVolumeButtonClockBitFields(struct VolumeButtonBitFields* vB)
{
	if(vB->currentStatus == On && vB->volumeLevel<=10){
        vB->volumeLevel = vB->volumeLevel + 1;
    }
    if(vB->volumeLevel>10){
        vB->volumeLevel = 10;
    }
}

/* 
If volume button is on, decrements the value of volume level by 1, 
every time it is called*/
void RotateVolumeButtonAntiClockBitFields(struct VolumeButtonBitFields* vB)
{
	if(vB->currentStatus == On){
        vB->volumeLevel--;
    }
}

/*  Toggles the status of the volume button - turns it on if it's off, 
and turns it off if it's on   */
void ToggleVolumeButtonBitFields(struct VolumeButtonBitFields* vB)
{
    if(vB->currentStatus == On){
        vB->currentStatus = Off;
    }
    else{
        vB->currentStatus = On;
    }
}

/*  Displays the current status of volume button and its volume level  */
void ShowCurrentVolumeBitFields(struct VolumeButtonBitFields vB)
{
	printf("currentStatus == %d",vB.currentStatus);
    printf("volumeLevel == %d",vB.volumeLevel);
}