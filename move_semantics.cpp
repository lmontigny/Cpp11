

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Move semantics
// Avoid costly deep copy


// overload based on the parameter type
void printInt(int& i) { cout << "lvalue reference " << i << endl; }
void printInt(int&& i) { cout << "rvalue rference " << i << endl; }
//void printInt(int i) // would no working due to the previous declaration

int main()
{
	int a = 5; // a is lvalue
	int&b = a; // b is lvalue reference
	//int&& c;   //c is a ravlue reference

	printInt(a); //first function
	printInt(6); // second function

	boVector reusable = createBoVector();
	foo(reusable); //lvalue
	foo(createBoVector()); //rvalue  foo(boVector&& rhs)
    return 0;
}

