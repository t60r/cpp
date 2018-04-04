// Note that print_all uses pointers that point to constant elements. 
// These pointers point to constant content they cannot modify, but they 
// are not constant themselves: i.e., the pointers can still be incremented
// or assigned different addresses, although they cannot modify the content 
// they point to.
// Pointers as arguments:
#include <iostream>
using namespace std;

void increment_all (int* start, int* stop)
{
	int * current = start;
	while (current != stop) {
		++(*current); 	//increment pointed val
		++current;		//increment pointer
	}
}

void print_all (const int* start, const int* stop)
{
	const int * current = start;
	while (current != stop) {
		cout << *current << '\n';
		++current;		//increment pointer
	}
}

int main ()
{
	int numbers [] = {10,20,30};
	increment_all (numbers, numbers+3);
	print_all (numbers, numbers+3);
	return 0;
}
