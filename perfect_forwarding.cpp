

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;

/*
A function template can pass its arguments 
through to another function whilst retaining 
the lvalue/rvalue nature of the function arguments 
by using std::forward. 

http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2006/n2027.html
https://www.justsoftwaresolutions.co.uk/cplusplus/rvalue_references_and_perfect_forwarding.html
*/

void g(X&& t); // A
void g(X& t);      // B

template<typename T>
void f(T&& t)
{
	g(std::forward<T>(t));
}

void h(X&& t)
{
	g(t);
}

int main()
{
	std::move<T>(arg);		// Turn arg into an rvalue type
	std::forward<T>(arg);	// Turn arg to type of T&&
	
	X x;
	f(x);   // lvalue
	f(X()); // rvalue
	h(x);
	h(X()); // 3
	
	
	return 0;
}

