#include "stdafx.h"
#include <iostream>
#include <string>
#include <unordered_map>
#include <bitset>
#include <memory>
using namespace std;

// AoS 
// A0 B0 C0 A1 B1 C1
struct Quadratic {
public:
	float a, b, c;
};

// SoA
// in the RAM
// A0 A1 A2
// B0 B1 B2
// C0 C1 C2
struct Quadratics {
public:
	float a[1 << 24];
	float b[1 << 24];
	float c[1 << 24];
} quads;

int main()
{
	const int count = 1 << 24; // 16 million

	 // ---- AoS ----
	Quadratic* e = new Quadratic[count]; // AoS
	float* roots = new float[count];

	// Random quadratrics
	for (int i = 0; i < count; i++)
	{
		e[i].a = (rand() % 100) - 50;
		e[i].b = (rand() % 100) - 50;
		e[i].c = (rand() % 100) - 50;
	}
	
	 // ---- SoA ----
	// Random quadratrics
	for (int i = 0; i < count; i++)
	{
		quads.a[i] = (rand() % 100) - 50;
		quads.b[i] = (rand() % 100) - 50;
		quads.c[i] = (rand() % 100) - 50;
	}
	
    return 0;
}
