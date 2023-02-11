#include <cxxtest/TestSuite.h>
#include "bitmap.h"


class test : public CxxTest::TestSuite
{
    public :
        void testOne(void)
        {
         
           	TS_ASSERT_EQUALS( findValidTime("01:20:15") ,4815 ); 
           
        }
        
         void testTwo(void)
        {
          
           	TS_ASSERT_EQUALS( findValidTime("05:10:25") ,18625 ); 
           
        }

         void testThree(void)
        {
           
           	TS_ASSERT_EQUALS( findValidTime("1:70:60") ,70 ); 
           
        }

         void testFour(void)
        {
           
           	TS_ASSERT_EQUALS( findValidTime("25:10:12") ,25 ); 
           
        }

         void testFive(void)
        {
           
           	TS_ASSERT_EQUALS( findValidTime("15:02:30") ,54150 ); 
           
        }
        
         void testSix(void)
        {
         
           	TS_ASSERT_EQUALS( findValidTime("10:05:60") ,60); 
           
        }
        
        
};

