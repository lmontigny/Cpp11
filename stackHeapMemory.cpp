

#include "stdafx.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	
	/*
	-Heap
	not fixed size
	can grow until mem limit
	dynamic memory allocation (malloc, calloc, realloc, free in C) (new, delete in C++)
	need to be deleted
	*/

	int *ptr = new int; // ptr is assigned 4 bytes in the heap
	int *array = new int[10]; // array is assigned 40 bytes in the heap

	/*
	-Stack 
	function call, local variable, 
	a part for all function main() etc...
	Part deleted after the return
	Too much mem asked = stack overflow 
	On Windows, the default stack size is 1MB. 
	On some unix machines, it can be as large as 8MB.
	*/
	int foo(int x)
	{
		return x;
	} // foo is popped off the call stack here

	/*
	-Static/global // accessible during the whole lifecycle of the application
	
	-Code // Instruction

	*/

	return 0;
}


/*
No, the difference between stack and heap isn't 
performance. It's lifespan : any local variable 
inside a function(anything you do not malloc() 
or new) lives on the stack.It goes away when 
you return from the function.If you want 
something to live longer than the function 
that declared it, you must allocate it on the 
heap.
*/
class Thingy;

Thingy* foo()
{
	int a; // this int lives on the stack
	Thingy B; // this thingy lives on the stack and will be deleted when we return from foo
	Thingy *pointerToB = &B; // this points to an address on the stack
	Thingy *pointerToC = new Thingy(); // this makes a Thingy on the heap.
									   // pointerToC contains its address.

									   // this is safe: C lives on the heap and outlives foo().
									   // Whoever you pass this to must remember to delete it!
	return pointerToC;

	// this is NOT SAFE: B lives on the stack and will be deleted when foo() returns. 
	// whoever uses this returned pointer will probably cause a crash!
	return pointerToB;
