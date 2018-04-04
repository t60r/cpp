//Using an array as a paramater
#include <iostream>
using namespace std;

void printarray (int arg[], int  length) {
for (int n=0; n<length; ++n)
		cout << arg[n] << ' ';
	cout << '\n';
}

int main ()
{
	int firstarray[] = {1,2,3,4,5};
	int secondarray[] = {5,78,2,8,7};
	printarray (firstarray,3);
	printarray (secondarray,5);
}
