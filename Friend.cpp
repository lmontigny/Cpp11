#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>
using namespace std;

class Human {
	string name;
	int age;

public:
	Human(string iname, int iage) 
		: name(iname), age(iage) {}
	void tellMe() {
		cout << name << endl << age << endl;
	}

friend void display(Human man); // declaration of the function
friend class classname; // specify a friend class
};

void display(Human man) { // function not a member of the class
	cout << man.name << endl << man.age << endl;
}

int main() {
	Human anil("anil", 24);
	display(anil);
	return 0;
}
