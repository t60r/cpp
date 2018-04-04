//stringstreams and shit, bro
#include <iostream>
#include <string>
#include <sstream>//ust this fucker
using namespace std;

int main ()
{
	string mystr;//declare shit
	float price = 0;
	int quantity = 0;

	cout << "Enter price: ";
	getline (cin, mystr);//do this
	stringstream(mystr) >> price;//pisses that into price
	cout << "Enter quantity: ";
	getline (cin, mystr);
	stringstream(mystr) >> quantity;//more pissing of streams
	cout << "Total price " << price*quantity << endl;//whoops!
	return 0;//bang, bang
}
