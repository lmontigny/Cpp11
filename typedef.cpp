#include "stdafx.h"
#include <iostream>
using namespace std;

// like an alias, useful if plateform is changed

typedef float FLOAT32;
typedef double FLOAT64;
typedef unsigned int U32;

int main()
{
	unsigned int bigInt = 2344;
	U32 bigInt = 2344;
	FLOAT32 myFloat = 6;
	FLOAT64 myDouble = 6;
    return 0;
}
