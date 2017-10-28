#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>
#include <array>
using namespace std;

// Collection of variable, same type

class Entity {
	int ex[5];
public:
	static const int mySize = 5;
    int myArr[mySize];

	std::array<int, 5> anotherArray;  // C++ 11 

	Entity() {
		for (int i = 0; i<5; i++){
			ex[i] = 2;
		}
	}
};

int main() {
	int example[5]; // created on the stack
	int* ptr = example;
	example[0] = 33;
	example[4] = 4;
	for (int i = 0; i<5; i++){
		example[i] = 2;
	}
	*(ptr + 2) = 6; // add 2*4 bytes because the pointer is int

	//cout << example[0] << endl;
	////cout << example << endl; // print adress, it is a pointer

	for (auto i : example) {
		cout << i << endl;
	}

	int* arr = new int[5]; // created on the heap, lifetime (if you return an array for example)
	for (int i = 0; i<5; i++){
		arr[i] = 2;
	}
	delete[] arr;

	Entity e; // memory Entity accessing to the memory adress of ex (if int* ex)


	int a[5];
	int size = sizeof(a) / sizeof(int); // 5

	return 0;
}
