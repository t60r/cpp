//Function example
#include <iostream>
using namespace std;

int addition (int a, int b)//basic addition function
{
	int r;
	r=a+b;
	return r;//see how this passes 'r'?
}

int main ()
{
	int z;
	z = addition (5,3);//z is effectively r
	cout  << "The result is " << z << endl;//or r
	return 0;
}
