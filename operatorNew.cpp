#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>
using namespace std;


int main()
{
	int a = 2;
	int* b = new int; // allocate 4 byte on the heap
	int* c = new int[200];
	Entity* e = new Entity(); // call the constructor
	Entity*e = (Entity*)malloc(sizeof(Entity)); // Equivalent to the new, no call to the constructor, to be avoided

	delete e; // call the destructor as well
	delete[] c;
	

    return 0;
}
