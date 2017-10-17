// MemberInitializerList.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <string>

class Entity {
private:
	int m_score;
	std::string m_Name;

public:
	Entity() 
		: m_score(0), m_Name("Unknown") //keep order
	{
		Init();
	}

	void Init() {
		std::cout << "Init" << std::endl;
		std::cout << m_Name << std::endl;
	}

};

int main()
{
	Entity e0;
    return 0;
}

