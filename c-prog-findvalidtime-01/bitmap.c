#include "bitmap.h"


/*Write a program to check if given string in "hh:mm:ss" format 
is representing valid time or not, return no.of seconds elapsed 
from 00:00:00 in case of valid string, else return invalid value
(Assume 24 hour format and fixed width string with leading zero 
for single digit). Refer Document for mor info.*/

int findValidTime(const char *str)
{
    // complete your code 
    int hour, minute, second;
    if(sscanf(str,"%d:%d:%d",&hour,&minute,&second)!=3)
    {
        return -1;
    }
    if (hour < 0 || hour > 23) { 
        return hour;
    }
    if (minute < 0 || minute > 59) {
        return minute;
    }
    if (second < 0 || second > 59){ 
        return second;
    }
    
    int ans=hour*3600;
    ans+=(minute*60);
    ans+=second;
    return ans;
}
