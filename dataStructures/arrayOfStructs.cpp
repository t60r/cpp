//Because structures are types, they can also be used as the type of arrays to construct tables or databases of them:
/*
 *	ARRAY OF STRUCTURES
 *	AUTHOR: MERKINMAKER
 *	PURPOSE: TO DEMONSTRATE AN ARRAY OF STRUCTURES
 *	DATE: 3/22/14
 * */

#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t 
{
	string title;
	int year;

}films [3];

void prntmov (movies_t movie);

int main ()
{
	string str;
	int n;

	for (n=0; n<3; n++)
	{
		cout << "Enter title: ";
		getline (cin,films[n].title);
		cout << "Enter year: ";
		getline (cin,str);
		stringstream(str) >> films[n].year;
	}

	cout << "\nYou have entered these movies:\n";
	for (n=0; n<3; n++)
	{
		prntmov (films[n]);
	}
	return 0;
}


void prntmov (movies_t movie)
{
	cout << movie.title;
	cout << "(" << movie.year << ")\n";;
}
