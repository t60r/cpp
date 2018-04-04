// overloading functions
#include <iostream>
using namespace std;
//overloaded functions may have the same definition
//int sum() and double sum()
int sum (int a, int b)
{
	return a+b;
}

double sum (double a, double b)
{
	return a+b;
}

int main ()
{
	cout << sum (10,20) << '\n';
	cout << sum (1.0, 1.5) << '\n';
	return 0;
}
