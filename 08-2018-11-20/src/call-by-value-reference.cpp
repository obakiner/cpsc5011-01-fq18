#include <iostream>
#include <string>
using namespace std;

/*
 * Are functions in C++ call by value or call by reference?
 *    -- numeric types
 *    -- strings
 *    -- vectors
 *    -- structs
 *  Do an experiment to find out.
 *  Can we force call by reference?
 *  	-- ref notation:    int &i;
 *  	-- use ref to implement a swap function
 *  	-- use ref to point multiple variables at the same storage address
 */

struct Simple {int id;};

void trash_variables(int ii, string ss, Simple sisi) {
	ii =0;
	ss.clear();
	sisi.id = 1;
}

void call_by_value_reference_example() {
	int i = 5;
	string s = "hello";
	Simple simple;
	simple.id = 9999;
	cout << i << " " << s << " " << simple.id << endl;
	trash_variables(i, s, simple);
	cout << i << " " << s << " " << simple.id << endl;

}
