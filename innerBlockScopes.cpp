//The visibility of an entity with block scope extends until the end of the block, including inner blocks. Nevertheless, an inner block, because it is a different block, can re-utilize a name existing in an outer scope to refer to a different entity; in this case, the name will refer to a different entity only within the inner block, hiding the entity it names outside. While outside it, it will still refer to the original entity. For example:
#include <iostream>
using namespace std;

int main () {
	int x = 10;
	int y = 20;
	{
		int x; //inner scoped x
		x = 50;
		y = 50;
		cout << "Inner Block:\n";
		cout << "x: " << x << '\n';
		cout << "y: " << y << '\n';
	}
	cout << "outer block:\n";
	cout << "x: " << x << '\n';
	cout << "y: " << y << '\n';
	return 0;
}



