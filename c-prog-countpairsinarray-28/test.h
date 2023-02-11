#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
public:
    void testOne(void)
    {
        int arr[] = {8, 7, 2, 5, 3, 1};
        int n = sizeof(arr) / sizeof(arr[0]);
        int sum = 10;

        TS_ASSERT_EQUALS(getPairsCount(arr, n, sum), 2);
    }

    void testTwo(void)
    {

        int arr[] = {-2, -1, 5, 13, 17, 25, 40};
        int n = sizeof(arr) / sizeof(arr[0]);
        int sum = -3;

        TS_ASSERT_EQUALS(getPairsCount(arr, n, sum), 1);
    }

    void testThree(void)
    {

        int arr[] = {1, 5, 10, 20, 80};
        int n = sizeof(arr) / sizeof(arr[0]);
        int sum = 40;

        TS_ASSERT_EQUALS(getPairsCount(arr, n, sum), 0);
    }

    void testFour(void)
    {

        int arr[] = {-2, -1,5,13,17,25,40};
        int n = sizeof(arr) / sizeof(arr[0]);
        int sum = 100;

        TS_ASSERT_EQUALS(getPairsCount(arr, n, sum), 0);
  
    }
};
