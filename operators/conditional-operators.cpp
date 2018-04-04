//Conditional operators
#include <iostream>
using namespace std;

int main ()
{
	int a, b, c;

	a=2;
	b=7;
	c = (a>b) ? a : b;//evaluates to which ever is greater

	cout << c << '\n';//should ouput 7
	return 0;
}
