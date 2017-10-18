// polymorphism.cpp : Defines the entry point for the console application.
//
// Use same function with different outcome
// The word polymorphism means having many forms.

#include "stdafx.h"
#include <iostream>
using namespace std;

class Enemy {
protected:
	int attackPower;
public:
	void setAttackPower(int a) {
		attackPower = a;
	}
};

class Ninja : public Enemy{
public:
	void attack() {
		cout << "I am a ninja, ninja chop! " << attackPower << endl;
	}

private:

};

class Monster : public Enemy {
public:
	void attack() {
		cout << "I am a monster, bam! " << attackPower << endl;
	}

private:

};

int main()
{
	Ninja n;
	Monster m;
	Enemy *enemy1 = &n;
	Enemy *enemy2 = &m;
	enemy1->setAttackPower(29);
	enemy2->setAttackPower(99);
	n.attack();
	m.attack();

    return 0;
}

