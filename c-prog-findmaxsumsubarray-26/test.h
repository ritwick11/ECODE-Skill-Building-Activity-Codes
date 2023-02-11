#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
public:
    void testOne(void)
    {
        int arr[] = {1, 5, 1, 6, 3, 2};

        TS_ASSERT_EQUALS(maxSubarraySum(arr, 6, 3), 12);
    }

    void testTwo(void)
    {

        int arr[] = {4, 1, 3, 5, 1};

        TS_ASSERT_EQUALS(maxSubarraySum(arr, 5, 2), 8);
    }

    void testThree(void)
    {

        int arr[] = {6, 1, 2, 5};

        TS_ASSERT_EQUALS(maxSubarraySum(arr, -4, 2), -1);
    }

    void testFour(void)
    {

        int arr[] = {4, 1, 2, 5, 6, 8};

        TS_ASSERT_EQUALS(maxSubarraySum(arr, -6, -2), -1);
    }
};
