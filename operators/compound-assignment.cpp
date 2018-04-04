// compound assignment operators
#include <iostream>
using namespace std;
//Assignment operators:
// =	Equals
//Arithmetic operators:
// +	Plus
// -	Minus
// *	Multiply
// /	Divide
// %	Modulo
//Compound Assignment
// +=	plus equals
// -=	minus equals
// /=	div eq	
// *=	mult eq
// %=	thing plus mod
// >>=	####
// <<=  ####
// &=	####
// ^=	####
// |=	####
//Increment and Decrement
// ++	
// --
//Rational Comparison
// ==	Equal to
// !=	not equal
// <	Less
// >	Greater
// <=	Less or Equal
// >=	Gt or Equal
//Logical Operators
// !	Not
// &&	And
// ||	Or
//Ternary Operator
// ?    The conditional operator evaluates an expression,
// 		returning one value if that expression evaluates to true,
// 		and a different one if the expression evaluates as false.
// 		Its syntax is:
//		condition ? result1 : result2
//		7==5 ? 4 : 3     // evaluates to 3, since 7 is not equal to 5.
//		7==5+2 ? 4 : 3   // evaluates to 4, since 7 is equal to 5+2.
//		5>3 ? a : b      // evaluates to the value of a, since 5 is greater than 3.
//		a>b ? a : b      // evaluates to whichever is greater, a or b.  
//Comma operator
// ,	The comma operator (,) is used to separate two or more expressions
//		that are included where only one expression is expected. When the set of
// 		expressions has to be evaluated for a value, only the right-most expression
// 		is considered.
//Bitwise operators
// &	AND		Bitwise AND
// |	OR		Bitwise OR
// ^	XOR		Bitwise XOR
// ~	NOT		Unary complementary (bit inversion)
// <<	SHL		Shift bits left
// >>	SHR		Shift bits right

int main ()
{
  int a, b=3;
  a = b;
  a+=2;             // equivalent to a=a+2
  cout << a << endl;
}
