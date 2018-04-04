//Notice that even though neither firstvalue nor secondvalue are directly 
//set any value in the program, both end up with a value set indirectly through
//the use of mypointer. This is how it happens:
//
//First, mypointer is assigned the address of firstvalue using the reference 
//operator (&). Then, the value pointed to by mypointer is assigned a value 
//of 10. Because, at this moment, mypointer is pointing to the memory location
//of firstvalue, this in fact modifies the value of firstvalue.
//
//In order to demonstrate that a pointer may point to different variables 
//during its lifetime in a program, the example repeats the process with 
//secondvalue and that same pointer, mypointer.

//My First Pointer
#include <iostream>
using namespace std;

const char n = '\n';

int main ()
{
	int first, second;
	int * mePointer;

	mePointer = &first;
	*mePointer = 10;
	mePointer = &second;
	*mePointer = 20;
	cout << "first is " << first << n;
	cout << "second is " << second << n;
	return 0;
}
