#include "stdafx.h"
#include <iostream>
using namespace std;

// Reinterpret_cast
struct Cow
{
	int moo;
	int leg;
	char gender;
	bool foo;
};

// static_cast (=compiler time)
class Base {
	virtual void f() {}
};
class Derived1 : public Base {
public:
	Derived1() {}
};
class Derived2 : public Base {};

int main()
{

// Reinterpret_cast
	Cow cow;
	cow.moo = 8;
	cow.leg = 5;
	cow.gender = 'f';
	cow.foo = true;

	Cow* cowPtr = &cow;
	int* intPtr = reinterpret_cast<int*>(cowPtr);
	cout << *intPtr << endl; // print 8
	cout << intPtr << endl; //print adress
	intPtr++;
	cout << intPtr << endl; // shift adress
	intPtr++;
	cout << *reinterpret_cast<char*>(intPtr) << endl;


// static_cast (=compiler time)
	Base* b = new Derived1; // prefer dynamic casting
	Derived1* d1 = static_cast<Derived1*>(b);
	Derived2* d1a = static_cast<Derived2*>(b); // undefined behavior!
	int i = 25;
	double d = sqrt(static_cast<double>(i));
	cout << d << endl;

// typeid()
	cout << typeid(Base).name() << endl; // for debugging mainly
	cout << typeid(Derived1).name() << endl;


// Dynamic_cast
	Base* bb = new Derived1;
	Derived1* d11 = dynamic_cast<Derived1*>(bb);

    return 0;
}


