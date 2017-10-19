

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	
	// malloc, adress of the first bloc of memory in heap


	void *p = malloc(4); // 4 bloc
	cout << p << endl; // adress

	sizeof(int); // size of one unit 
	int numberofUnit = 2;
	void *a = malloc(sizeof(int)*numberofUnit);

	// Need a type casting to access a
	int *i = (int*)malloc(sizeof(int) * 3);
	*i = 2;
	*(i + 1) = 3;
	i[2] = 33;
	i[29]; // undefined behavior!

	free(i);

	// realloc
	//void* realloc(void* ptr, size_t size);

	return 0;
}


