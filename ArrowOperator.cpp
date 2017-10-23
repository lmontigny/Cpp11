// ImplicitCasting.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdlib.h>
using namespace std;

class Entity {
public:
	int x;
public:
	void Print() const { cout << "Yooo" << endl; }
};

class ScopedPtr {
private:
	Entity* m_obj;
public:
	ScopedPtr(Entity* entity)
		: m_obj(entity)
	{
	}

	~ScopedPtr() {
		delete m_obj;
	}

	Entity* operator->()
	{
		return m_obj;
	}

	const Entity* operator->() const
	{
		return m_obj;
	}
};

struct Vector3 {
	float x, y, z;
};

int main()
{
	Entity e;
	e.Print();

	Entity* ptr = &e;
	(*ptr).Print();
	ptr->Print(); //same as previous line, just a shortcut to dereference

	ScopedPtr entity = new Entity();
	entity->Print();

	int offset = (int)&((Vector3*)0)->x; //cast 0 into a Vector3, take a adress & and cast it to int
	cout << offset << endl;


    return 0;
}

