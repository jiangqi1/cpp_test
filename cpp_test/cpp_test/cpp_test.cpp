#include <iostream>
using namespace std;

// My first C++ code
int main()
{
	double d;
	long l;
	short s;
	int i;
	char c;
	
	int size_of_int, size_of_char, size_of_short, size_of_long, size_of_double;

	size_of_double = sizeof(d);
	size_of_long = sizeof(l);
	size_of_int = sizeof(i);
	size_of_char = sizeof(c);
	size_of_short = sizeof(s);

	cout << "size_of_double = " << size_of_double << '\n';
	cout << "size_of_long = " << size_of_long << '\n';
	cout << "size_of_int = " << size_of_int << '\n';
	cout << "size_of_short = " << size_of_short<< '\n';
	cout << "size_of_char = " << size_of_char;
	cin >> c; // compile by visual 2015
	return 0;
}