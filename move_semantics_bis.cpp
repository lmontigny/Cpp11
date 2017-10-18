

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

// Move semantics
/* Formally, copying causes a target
object t to end up with the same
state as the source s, without
modifying s.

Using the value of a temporary
object e.g. these to initialize
another object or to assign its
value, does not require a copy 
=> use move


Copy constructor = deep copy (expensive)
Move constructor = shallow copy
*/

class boVector {
	int size;
	double *arr_; // big array
public:
	boVector(const boVector& rhs) { // Copy constructor
		size = rhs.size;
		arr_ = new double[size];
		for (int i = 0; i < size; i++) { arr_[i] = rhs.arr_[i]; }
	}
	boVector(const boVector&& rhs) { // Move constructor
		size = rhs.size;
		arr_ = rhs.arr_;
		rhs.arr_ = nullptr;
	}
	~boVector() { delete arr_; }
};

void foo(boVector v);

boVector createBoVector();

int main()
{
	boVector reusable = createBoVector();
	foo(reusable);
	

	foo(createBoVector()); // rvalue, no need to make a copy of tmp and passing it to foo
	foo(std::move(reusable)); // call the move constructor, reusable is after destoryed!!
    return 0;
}

