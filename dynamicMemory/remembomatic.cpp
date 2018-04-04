//The first statement releases the memory of a single element allocated using new, and the second one releases the memory allocated for arrays of elements using new and a size in brackets ([]).
//
//The value passed as argument to delete shall be either a pointer to a memory block previously allocated with new, or a null pointer (in the case of a null pointer, delete produces no effect).
/*

######################  
#REMEMB-O-MATIC 0.0.1#
######################

*/

#include <iostream>
#include <new>
#include <cstdio>
using namespace std;

int main ()
{
	int i,n;
	int * p;
	cout << "How many numbers would you like to type? ";
	cin >> i;
	p= new (nothrow) int[i];
	if (p == 0)
		cout << "Error: memory could not be allocated";
	else
	{
		for (n=0; n<i; n++)
		{
			cout << "Enter a number: ";
			cin >> p[n];
		}
		cout << "You have entered: ";
		for (n=0; n<i; n++)
		{
			cout << p[n] << ", ";
		}
		delete[] p;
	}
	return 0;
}

