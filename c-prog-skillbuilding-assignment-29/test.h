#include <cxxtest/TestSuite.h>
#include "bitmap.h"

softD SD1[MAX_SIZE] =
    {
        {1001, "7up", 15, 20},
        {1002, "Frooti", 10, 16},
        {1003, "Mountain Dew", 20, 14},
        {1004, "Fanta", 15, 7},
        {1005, "Slice", 15, 13},
        {1006, "Thums Up", 10, 15},
        {1007, "Bisleri", 5, 10},
        {1008, "Coca cola", 10, 8}
        
    };
		
int len = 8;

		
class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne( void )
    {
        unsigned long a = HighestPrice (SD1, len);
		TS_ASSERT( a == 20 );
		TS_TRACE("testOne");

    }

    void testTwo( void )
    {
        unsigned int a = MinimumQty (SD1, len);
	    TS_ASSERT( a == 7);
		TS_TRACE("testTwo");
    }
	
	void testThree( void )
    {
        unsigned int a = ReturnBalance (SD1,1004,50, len);
	    TS_ASSERT( a == 35 );
		TS_TRACE("testThree");
    }
	
	void testFour( void )
    {
        unsigned int a = AvailableQty (SD1,1004, len);
	    TS_ASSERT( a == 7 );
		TS_TRACE("testFour");
    }
};


