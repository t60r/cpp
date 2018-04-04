/* Pointers to Classes Example
 * 
 * Objects can also be pointed to by pointers: Once
 * declared, a class becomes a valid type, so it can
 * be used as the type pointed to by a pointer. For
 * example: 
 *
 * Rectangle * prect;
 *
 * is a pointer to an object of class Rectangle.
 *
 * Similarly as with plain data structures, the members
 * of an object can be accessed directly from a pointer
 * by using the arrow operator (->). Here is an example
 * with some possible combinations:
 * use 'g++ -std=c++11 foo.cpp -o foo'
 */

#include <iostream>
using namespace std;

class Rectangle {
	int width, height;
public:
	Rectangle(int x, int y) : width(x), height(y) {}
	int area(void) { return width * height; }
};


int main () {
	Rectangle obj (3, 4);
	Rectangle * foo,  * bar,  * baz;
	foo = &obj;
	bar = new Rectangle (5,6);
	baz = new Rectangle[2] { {2,5},{3,6} };
	cout << "obj's area: " << obj.area() << '\n';
	cout << "*foo's area: " << foo->area() << '\n';
	cout << "*bar's area: " << bar->area() << '\n';
	cout << "baz[0]'s area: " << baz[0].area() << '\n';
	cout << "baz[1]'s area: " << baz[1].area() << '\n';
	delete bar;
	delete[] baz;
	return 0;
}
