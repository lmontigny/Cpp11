#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>
using namespace std;

template<class T1 = string, class T2 = int>
class myClass {
	T1 p1;
	T2 p2;
	int counter;

public:
	myClass(T1 x, T2 y) {
		p1 = x;
		p2 = y;
		counter = 100;
	}


};


int main() {
	myClass<int, string> object1(4, "toto");
	myClass<int, float> object2(4, 3.0);
	myClass<> object3("tuuuu", 2.0);
	myClass<float> object4(9.0, 256); // take care of the order


	return 0;
}
