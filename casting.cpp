// ImplicitCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
using namespace std;

// Standart Type COnversion
// Defined Type conversion
// Both implicit and explicit=casting possible

class Entity {
private:
	string m_Name;
	int m_Age;
public:
	Entity(const string& name)
		: m_Name(name), m_Age(-1) {}

	Entity(int age)
		: m_Name("Unknow"), m_Age(age) {}

	//explicit Entity(int age)
		//: m_Name("Unknow"), m_Age(age) {}
};

void PrintEntity(const Entity& entity) {

}

int main()
{
	PrintEntity(22); // implicit due to the constuctor

	Entity a("Cherno");
	Entity b(22);

	Entity cc = "Cherno"; // implicit conversion


	// Implicit Standart Type Conversion
	// Convert one data type to an other
	char c = 'A';
	int i = c;
	char* pc = 0;
	//void f(int i);
	//f(c);

	int sales = 9;
	float avg = (float)sales / 5;
	cout << avg << endl;



	// Explicit

	// satic_cast
	int i = 9;
	float f = static_cast<float>(i); // convert object from one type to another
	dog* pdog = static_cast<dog*>(new yellowdog()); // (down/up casting)

	// dynamic cast
	dog* pdog = new yellowdog();
	yellowdog py = dynamic_cast<yellowdog*>(pd);
	// convert pointer/reference from one type to a related type (down cast)
	// run time check, if succeed py==pd if fail py==0;
	// need virtual function

	// const_cast
	const char* str = "hello";
	char* modifiable = const_cast<char*>(str);
	// work with pointer, reference on same type, cast away constness of the object 
	// being pointed to

    return 0;
}

