#include "bitmap.h"

/* You will be given an array of integers and the subarray size k.
   Your task is to find the maximum sum of any contiguous subarray of size 'k' */

int maxSubarraySum(int arr[], int n, int k)
{

    if (n<k)
        return -1;
    if(n<0||k<0)
        return -1;

    int i, j;
    int temp_sum = 0;
    int result = 0;
    
    for(i=0; i+k<=n ; i++)
    {
        for(j=i; j<i+k; j++)
            temp_sum += arr[j];

        if(temp_sum>=result)
            result = temp_sum;
        temp_sum=0;
    }
    return result;
}
