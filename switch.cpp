// Don't forget break statement

int main()
{
	for (int i = 0; i < 3; i++) {
		switch (i) {
		case 0: cout << "0" << endl; break;
		case 1: cout << "1" << endl; break;
		case 2: cout << "2" << endl; break;
		default: cout << "default case" << endl; break;
		}
	}
    return 0;
}
