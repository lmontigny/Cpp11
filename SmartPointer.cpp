#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>




int main()
{
	/*
	Smart Pointer = don't need to take care of the delete
	unique_ptr = scope pointer, can't be copied
	shared_ptr = count the number of reference to the pointer, 
				if no reference -> deleted.
				can be copied.
	*/
	// Pointer
	int* foo = new int[5];
	delete[] foo;

	// Unique ptr
	{
		std::unique_ptr<int> foo = std::make_unique<int>();
		*foo = 5;
		std::cout << *foo << std::endl;
	}

	// Shared ptr
	std::shared_ptr<int> myPointer = std::make_shared<int>();
	std::shared_ptr<int> copy_myPointer; // scope is not a n issue
	{
		*myPointer = 10;
		std::cout << *myPointer << std::endl;
		copy_myPointer = myPointer;
	}
	std::cout << "myPointer: " << *myPointer << std::endl;
	std::cout << "copy of myPointer: " << *copy_myPointer << std::endl;
	
    return 0;
}
