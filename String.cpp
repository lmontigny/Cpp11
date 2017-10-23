#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

// String
// Char are 1 byte, string = array of char

void PrintString(const string& string) {
	cout << string << endl;
}

int main()
{
	const char* name = "Cherno"; // C style (no need to delete asno new)
	//name[2] = 'a';

	char name2[6] = { 'C', 'h', 'e', '\0' }; // need termination char 0
	cout << name2 << endl;

	string name3 = "Cherno"; // C++ style
	cout << name3 << endl;
	// name3.size()

	// merge string
	name3 += " Hello!";
	string name4 = string("Cherno") + " Hello!"; // with the constructor
	//name4.find("no")
	
	// String literal
	const wchar_t* name_w = L"Cherno";
	const char16_t* name_16 = u"Cherno";

	using namespace std::string_literals; //C++14
	string toto = "toto"s + "hello";
	cout << toto << endl;
  
  return 0;
}

