#include "bitmap.h"
// Complete other records in this array...
softD SD[MAX_SIZE] =
    {
        {1001, "7up", 15, 20},
        {1002, "Frooti", 10, 16},
        {1003, "Mountain Dew", 20, 14},
        {1004, "Fanta", 15, 7},
        {1005, "Slice", 15, 13},
        {1006, "Thums Up", 10, 15},
        {1007, "Bisleri", 5, 10},
        {1008, "Coca cola", 10, 8} 
    // complete the record
    };

/* The function returns the Price of Beverage
   with the Highest Value in the given records.
   In case there are 2 or more beverage with the
   same highest price, return the first value found.
*/
unsigned int HighestPrice(const softD *parr, int length)
{
    unsigned long maxPrice = parr[0].Price;
    
	for(int i = 1; i<length; i++)
	{
		if(maxPrice<parr[i].Price)
		{
			maxPrice = parr[i].Price;
		}
	}
	return maxPrice;
}

/*
The function returns the minimum qty in the given
BeverageInfo records. The candidate must navigate
through the records and return the minimum qty of beverage.
In case there are 2 or more beverage with the same qty,
return the first value found.

*/
unsigned int MinimumQty(const softD *parr, int length)
{
    unsigned int minQty = parr[0].quantity;
    
	for(int i = 1; i<length; i++)
	{
		if(minQty>parr[i].quantity)
		{
			minQty = parr[i].quantity;
		}
	}
	return minQty;
}

/*
This function has three arguments one is Uint (Item code)
2nd argument is Uint( customerAmount) and 3rd argument
is int( length of array structure).
Note: the amount should be round off / multiples of 5.
Ex (15,20, 50,30), Invalidamount(11, 22,33,54)
	The function has to check the passed arguments are valid
    or invalid. Ex: user has to pass available ItemsCode in
    the record and amount should be less than 100rs and It
    should be round off as per the example given above.
•	If its valid, then the function has to return the
    balance amount to the customer.
    Ex: The argument passed(1004, 50)
    The price value 1004 is 15 rs (as per record) so
    [amount – Item price] ( 50 -15 = 35). The function has
    to return the 35 rs as balance amount to the customer.
•	If its invalid then the function has to return-1 (minus one).
*/

unsigned int ReturnBalance(const softD *parr, unsigned int itemCode, unsigned int customerAmount, int length)
{
    int bal=Invalid;
    if(customerAmount<=100)
    {
        for(int i=0; i<length; i++)
        {
            if(itemCode==parr[i].itemCode)
            {   
                if(customerAmount>=parr[i].Price)
                
                    bal = (customerAmount-parr[i].Price);
                    return bal;
            }
        }
    }
    else
        return bal;
}


/*
  The function returns the available qty of argument passed
  (itemsCode) in the given records.

*/
unsigned int AvailableQty(const softD *parr,unsigned int itemCode, int length)
{
    int qty = Invalid;
    for(int i=0; i<length; i++)
    {
        if(itemCode == parr[i].itemCode)
        {
            qty = parr[i].quantity;
            return qty;
        }
    }
    return qty;
}
