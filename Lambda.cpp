#include "stdafx.h"
#include <string>
#include <iostream>
#include <stdlib.h>
#include <vector>
#include <algorithm>
using namespace std;

// Lambda function = anonymous function
//auto someVar[](int a, int b) -> int {}
	// body of the function
	//(int a, int b) parameter list
	//	-> int optional


int main()
{
	auto sayHello = []() { // empty
		cout << "Hello" << endl;
	};
	sayHello();

	auto mySum = [](int a, int b) { // parameter
		return a + b;
	};
	cout << mySum(10, 20) << endl;

	int i = 5;
	auto mySum1 = [i](int a, int b) { // capture list
		return a + b + i;
	};
	cout << mySum1(10, 20) << endl;

	int g = 5;
	auto mySum2 = [&g](int a, int b) { // capture list by reference
		g = 9;
		return a + b + g;
	};
	cout << mySum2(10, 20) << endl;
	cout << g << endl;

	// [=] all the var, capture by value
	// [&] all the var, capture by ref
	// [=,&i] fine too

	std::vector<int> arr{ 1,2,3,4,5 };
	double total = 0;

	std::for_each(begin(arr), end(arr),
		[&](int x) {
		total += x; //total is capture by ref
	});
	cout << total << endl;

	return 0;
}
