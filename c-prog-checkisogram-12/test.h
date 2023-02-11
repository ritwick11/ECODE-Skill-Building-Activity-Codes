#include <cxxtest/TestSuite.h>
#include "bitmap.h"

class test : public CxxTest::TestSuite
{
public:
    void testOne(void)
    {
       const char *str = "chocolate";
        TS_ASSERT_EQUALS(checkIsogram(str), 0);
    }

    void testTwo(void)
    {

       const char *str = "computer";
        TS_ASSERT_EQUALS(checkIsogram(str), 8);
    }

    void testThree(void)
    {

        const char *str = "table";
        TS_ASSERT_EQUALS(checkIsogram(str), 5);
    }

    void testFour(void)
    {
        const char *str = "sensor";
        TS_ASSERT_EQUALS(checkIsogram(str), 0);
    }

    void testFive(void)
    {

        const char *str = "HELLO";
        TS_ASSERT_EQUALS(checkIsogram(str), 0);
    }
};
