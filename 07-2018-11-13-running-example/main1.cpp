#include <iostream>
#include <string>
using namespace std;

/*
 * Standard hello world example.  Things to notice.
 *    - Every program must have the #include<iostream> and using namespace std; lines
 *    - In this program we are also using C++ strings, which is why we include the system string.h
 *    - The << operator, which is overloaded in its left argument cout, which is of type ostream
 *    - Chaining the calls to << operator, which is common in C++
 *    - To get an end line character you can either use the variable endl or put it in the string yourself
 *
 *  We are using a C++ implementation of string, which is like Java string
 *  except C++ strings are mutable.  More documentation on strings here
 *     http://www.cplusplus.com/reference/string/string/
 *
 */

/*
int main() {
	string world = "world";
	cout << "Hello " << world << endl;
	cout << "Hello " + world << endl;
	world = "world\n";
	cout << "Hello " + world;
}
*/
