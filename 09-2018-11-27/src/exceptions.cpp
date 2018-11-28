#include <iostream>
#include <typeinfo>
#include <string>
#include <vector>
using namespace std;

/*
 * Exceptions in C++
 *
 *  -- Throw / catch syntax is the same as Java
 *  -- You can throw anything you want.  A primitive (string) or an instance of your own class
 *  -- The standard library has
 */


void exceptions() {
	//throw_catch_primitive();
	//throw_catch_my_class();
	//out_of_bounds_error();
}

/*
void sample_throw_catch() {
	try {
		throw 2.5;
	} catch (int i) {
		cout << "Threw int " << i << endl;
	} catch (double d) {
		cout << "Thres double " << d << endl;
	}
}

class MyException {
private:
	string _what;
public:
	MyException(string what) { _what = what; }
	string what() const { return _what; }
};

void another_throw_catch() {
	try {
		throw new MyException("some error");
	} catch (MyException *e) {
		cout << e->what() << endl;
		char c;
		cin >> c;
	}
}

void predefined_exceptions_too() {
	try {
		vector<int> v = {1,2};
		cout << v.at(33) << endl;
	} catch (const out_of_range &e) {
		cout << "Caught out of range" << endl;
		cout << e.what() << endl;
	}
}
*/

