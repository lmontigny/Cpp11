#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

template <class T>
class Spunky {
public:
	Spunky(T x) {
		cout << x << " is not a char!" << endl;
	}
};

template<>
class Spunky<char> {
public:
	Spunky(char x) {
		cout << x << " is a char!" << endl;
	}
};

int main()
{
	Spunky<int> obj1(7);
	Spunky<char> obj2('c');

    return 0;
}
