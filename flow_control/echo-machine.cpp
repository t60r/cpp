//magic echo machine
#include <iostream>
#include <string>
using namespace std;

int main ()
{
  string str;
    do {
	    cout << "Enter shit bruh: ";
		getline (cin,str);
		cout << "You entered: " << str << '\n';
	} while (str != "goodbye");
	return 0;
}
