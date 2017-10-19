

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

class Person {
public:
	string *name;
	int age;

	Person(string name, int age) {
		this->name = new string(name);
		this->age = age;
	}

	// call when we copy an object of this class
	Person(const Person& other) {
		cout << " Copy constructor" << endl;
		name = new string(*other.name);
		age = other.age;
	}

	void changeNameAndAge(string name, int age) {
		*(this->name) = name;
		this->age = age;
	}

	void introduce() {
		cout << *name << " " << age << endl;
	}
};

int main() {
	
	Person anil("anil", 24);
	anil.introduce();

	Person duplicate_anil = anil;
	duplicate_anil.introduce();

	anil.changeNameAndAge("anil shetty", 100);

	// *name is pointer
	// below get "anil shetty" for both objects
	// without copy constructor
	anil.introduce(); 
	duplicate_anil.introduce(); 

	return 0;
}

