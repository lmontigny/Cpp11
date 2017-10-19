

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	
	char c;
	cout << sizeof(c) << endl; // 1 byte

	int i;
	cout << sizeof(i) << endl; // 4 bytes

	double d;
	cout << sizeof(d) << endl; // 8 bytes

	float f;
	cout << sizeof(f) << endl; // 4 bytes

	double bucky[10];
	cout << sizeof(bucky) << endl; // 80 bytes




	return 0;
}


