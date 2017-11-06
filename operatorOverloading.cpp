#include "stdafx.h"
#include <iostream>
using namespace std;

// + is a function

struct Vector
{
	int x;
	int y;
	Vector(int x = 0, int y=0): x(x), y(y) {}

	Vector operator-(const Vector& right) {
		Vector ret;
		ret.x = this->x - right.x;
		ret.y = this->y - right.y;
		return ret;
	}

};

Vector operator+(const Vector& left, const Vector& right) {
	Vector ret;
	ret.x = left.x + right.x;
	ret.y = left.y + right.y;
	return ret;
}

ostream& operator<<(ostream& stream, const Vector& right) {
	cout << right.x << " " << right.y << endl;
	return stream;
}

int main()
{
	Vector v1;
	v1.x = 2;
	v1.y = 8;

	Vector v2;
	v2.x = 1;
	v2.y = 4;

	Vector result;
	//result.x = v1.x + v2.x;
	//result.y = v1.y + v2.y;

	result = v1 + v2;
	result = operator+(v1, v2); // function!
	cout << result.x << endl;

	Vector foo(1, 2), bar(3, 4);
	Vector res = foo + bar;
	cout << res << endl;

	Vector res1 = foo - bar;
	cout << res1 << endl;
    return 0;
}


