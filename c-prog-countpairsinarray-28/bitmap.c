#include "bitmap.h"

/* You will be given an array of integers and the target value. 
Your task is to count the number of pairs present in the array 
whose sum is equal to the target value. */


int getPairsCount(int arr[], int n, int sum)
{
    //complete the code 
    int count=0;
    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if((arr[i]+arr[j])==sum)
                count++;
        }
    }
    return count;
}
