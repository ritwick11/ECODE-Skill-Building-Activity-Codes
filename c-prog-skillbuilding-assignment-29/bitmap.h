#include <stddef.h>
#include <string.h>
#include <stdio.h>

// Macros
#define MAX_SIZE 8

// Structure
struct beverageInfo
{

    unsigned int itemCode;
    char itemName[20];
    unsigned int Price, quantity;
};

typedef struct beverageInfo softD;

enum category{Invalid =-1};

// Function Prototypes

unsigned int HighestPrice(const softD *parr, int length);

unsigned int MinimumQty(const softD *parr, int length);

unsigned int ReturnBalance(const softD *parr, unsigned int itemCode, unsigned int customerAmount, int length);

unsigned int AvailableQty(const softD *parr, unsigned int itemCode, int length);

