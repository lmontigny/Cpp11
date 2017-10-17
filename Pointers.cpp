// Pointer.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	int var = 8;
	void* ptr = nullptr;
	ptr = &var;
	//*ptr = 10; // not working because void

	int* ptr1 = nullptr;
	ptr1 = &var;
	*ptr1 = 10;

	// On the heap
	char* buffer = new char[8]; // allocate 8 bytes of memory and return pointer to the beginning of the array
	memset(buffer, 0, 8);

	// Double pointer
	char** sptr = &buffer;
	int** hptr = &ptr1;
	**hptr = 2;

	cout << var << endl;


	delete[] buffer;

	return 0;
}

