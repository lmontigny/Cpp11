// test.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
using namespace std;

// Memory shared between the members of the union
union emp {
	int id;
	float sal;
} anil, ras;

int main()
{
	emp foo, bar;
	foo.id = 25;
	foo.sal = 100;
	cout << foo.id << " " << foo.sal << endl;
    return 0;
}


// Other example:
// Unions are usually used with the company of a discriminator : 
// a variable indicating which of the fields of the union is valid.
// For example, let's say you want to create your own Variant type:

struct my_variant_t {
	int type;
	union {
		char char_value;
		short short_value;
		int int_value;
		long long_value;
		float float_value;
		double double_value;
		void* ptr_value;
	};
};
// Then you would use it such as :

/* construct a new float variant instance */
void init_float(struct my_variant_t* v, float initial_value) {
	v->type = VAR_FLOAT;
	v->float_value = initial_value;
}

/* Increments the value of the variant by the given int */
void inc_variant_by_int(struct my_variant_t* v, int n) {
	switch (v->type) {
	case VAR_FLOAT:
		v->float_value += n;
		break;

	case VAR_INT:
		v->int_value += n;
		break;
		...
	}
}
