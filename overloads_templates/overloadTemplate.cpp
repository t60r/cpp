//Templates are a powerful and versatile feature. They
//can have multiple template parameters, and the functiaon
//can still use regular non-templated types. For example:
// function template
#include <iostream>
using namespace std;

template <class T, class U>
bool are_equal (T a, U b)
{
	return (a==b);
}

int main ()
{
	if (are_equal(10,10.0))
		cout << "x and y are equal\n";
	else
		cout << "x and y are not equal\n";
	return 0;
}
