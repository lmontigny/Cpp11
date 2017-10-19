// From the cherno project
// https://www.youtube.com/watch?v=4fJBrditnJU

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

//
int* a, *b; // to have pointer for a and b !

class Entity {
private:
	int m_X, m_Y;
	int* m_p_X;
	mutable int var;
public:
	int getX() const { // only work in a class
		// don't modifiy the class members, read only
		// m_X = 2; NO!
		var = 2; // modifiable as it is mutable
		return m_X;
	}

	const int* const getpX() const {
		// return pointer non modifiable
		// content of pointer non modifiable
		// method dont modify entity
	}

	void setX(int x) {
		m_X = x;
	}
};

void printEntity(const Entity& e) {
	// getX need to be 'int getX const' to garanty that I will no touch the entity
	// as we pass it by const ref here.
	cout << e.getX() << endl;
}


int main() {
	Entity e;
	const int max_age = 5;

	const int *a = new int;
	//*a = 2; // No! Can not change the data in the memory adress
	a = (int*)&max_age; // ok
	cout << *a << endl;

	int* const b = new int; //after *
	*b = 2; // ok, can change content
	//b = (int*)&max_age; // can't reassign
	cout << *b<< endl;

	const int* const c = new int;
	// nothing, the adress and the content are unmodifiable

	return 0;
}

