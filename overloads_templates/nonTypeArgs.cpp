//The template parameters can not only include types introduced by
//class or typename, but can also include expressions of a particular
//type:
// Template Argumants:
#include <iostream>
using namespace std;

template <class T, int N>
T fixed_multiply (T val)
{
	return val * N;
}

int main () {
	std::cout << fixed_multiply<int,2>(10) << '\n';
	std::cout << fixed_multiply<int,3>(10) << '\n';
	return 0;
}

