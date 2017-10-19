

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
by ref/point can return several var, not only with return
avoid copy
can set pointer to NUll
*/

void passByValue(int x); //create a copy in the stack 
void passByReference(int& x); // create an alias with the same adress
void passByPointer(int* x); // create a copy of the adress in the stack

int main(){
	int betty{ 13 };
	int sandy{ 13 };

	passByValue(betty);
	passByReference(&sandy);
	
	cout << "betty " << betty << endl;
	cout << "sandy " << sandy << endl;

	return 0;
}

void passByValue(int x) {
	x = 99;
}

void passByReference(int& x) {

}

void passByPointer(int* x) {
	*x = 66;
}
