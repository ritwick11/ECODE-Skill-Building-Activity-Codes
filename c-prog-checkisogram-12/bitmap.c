#include"bitmap.h"

/*Isogram is a string which is not having any repeated letters consecutively
 or non-consecutively, ignoring  the case, i.e. even upper and lower case letters 
 are not considered as repetitive Return length of the string if 
 given string is an isogram , else return 0  */


int checkIsogram(const char *str)
{
    int n = strlen(str); 
    int value = 0;
    int temp;
    char *string;
    string = (char*)malloc(20);
    strcpy(string,str);
    for(int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++) 
        {
            if (string[i] > string[j]) 
            {
                temp = string[i];
                string[i] = string[j];
                string[j] = temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        if(string[i]==string[i+1])
        {
            value = 0;
            return value;
        }
    }
        return n;
}
