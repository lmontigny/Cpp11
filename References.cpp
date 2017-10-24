using namespace std;

void Increment(int* value) {
	(*value)++;
}

void IncrementRef(int& value) {
	value++;
}

int main()
{
	// reference can't be null instead of ptr
	int a = 5;
	int* b = &a;
	int& ref = a; // created an alias
	ref = 2;
	cout << a << endl;

	int c = 5;
	Increment(&c);
	cout << c << endl;

	int d = 5;
	IncrementRef(d);
	cout << d << endl;

}
