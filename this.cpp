

#include "stdafx.h"
#include <iostream>
using namespace std;

class Cow {
	int maxHeatbeats;
	Cow(int maxHeartbeats) {
		this->maxHeatbeats = maxHeartbeats;
	}
public:
	Cow() {
	}
	void printThis() const {
		cout << this << endl;  //an adress
	}
	Cow contrived() const {
		return *this; // dereference pointer, the copy constructor is called
	}
};

int main()
{
	Cow betsy;
	cout << &betsy << endl;  // give adress A
	betsy.printThis(); // give adress A too

	Cow geory;
	cout << &geory << endl;
	geory.printThis();

	Cow* bobby = new Cow;
	cout << bobby << endl;
	bobby->printThis();
	delete bobby;

    return 0;
}

