

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	// https://www.youtube.com/watch?v=UTUdhjzws5g
	//lvalue=adress in memory identifiable
	// otherwise rvalue

	//lvalue
	int x = 2;
	dog d1;
	int* p;

	int i;
	int& r = i; // r is lvalue reference

	//rvalue
	int x = i + 2; // i+2 is rvalue
	d1 = dog() //dog() is rvalue
	int i = sum(3, 4) // sum(3,4) is rvalue

	// Exception: const lvalue refrence can be assign a rvalue
	int& r = 5;  // error
	const inst& r = 5; //ok

	// lvalue to rvalue
	int i = 1;  //i is lvalue (memory adress identifiable)
	int x = i + 2; // i+2 is rvalue
	int x = i; // i implicitely transformed into rvalue

	// rvalue to lvalue (has to be explicit!)
	int v[3];
	*(v + 2) = 4;

	// function or operator 
	int& foo() {
		return my_global;
	}
	foo() = 50; // ok

    return 0;
}

