//example structure
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

struct movies_t {
	string title;
	int year;
} me, ye;

void printmovie (movies_t movie);

int main()
{
	string mystr;

	me.title = "2001 A Space Oddysey";
	me.year = 1968;

	cout << "Enter title: ";
	getline (cin,ye.title);
	cout << "Enter year: ";
	getline(cin,mystr);
	stringstream(mystr) >> ye.year;

	cout << "My favorite movie is:\n";
	printmovie (me);
	cout << "And ye is:\n";
	printmovie (ye);
	return 0;
}

void printmovie (movies_t movie)
{
	cout << movie.title;
	cout << "(" << movie.year << ")\n";
}

