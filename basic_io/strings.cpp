//cin with strings
//uses stings and shite
#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string mystr;
	cout << "What is you name?";
	getline (cin, mystr);
	cout << "Hello " << mystr << "\n";
	cout << "What is your favorite type of lunmch meat?";
	getline (cin, mystr);
	cout << "I like " << mystr << " too!\n";
	return 0;
}
