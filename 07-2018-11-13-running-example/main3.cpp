#include <iostream>
using namespace std;

/*
 * This demonstrates all of the built-in types in C/C++.  They are all "numeric"
 * in they are just a certain number of bytes that you can operate on with arithmetic
 * operators.   General types are
 *
 * The boolean -- just one byte;   0 is false, anything else is true
 * The char -- one byte for ASCII characters, there is also char16_t and char32_t
 * The integers -- short, int, long, and long long.  Identical except they take up
 * 		more space, so have larger range
 * The unsigned integers -- same space as the signed integers, but since there is
 *      no sign bit, they can represent a larger (positive) integer using the same amount of space
 * The floating points -- float, double, and long double.  Identical except for the space
 *    they take up.
 *
 *  The pointer type -- the code shows that a pointer to a boolean and a pointer to
 *     a long double both take up the same space even though the objects they
 *     are pointing to are of different sizes
 */

/*
int main() {

	bool b;main3.cpp
	char c;
	unsigned char uc;

	short int si;
	int i;
	long int li;
	long long int lli;

	unsigned short int usi;
	unsigned int ui;
	unsigned long int uli;
	unsigned long long int ulli;

	float f;
	double d;
	long double ld;

	bool *cp;
	long double *ldp;

	cout << "Boolean, character, and unsigned character" << endl;
	cout <<   sizeof(b)  << endl;
	cout <<  sizeof(c) << endl;
	cout <<   sizeof(uc) << endl;
	cout << endl;

	cout << "The integers from shortest to longest" << endl;
	cout <<   sizeof(si) << endl;
	cout <<   sizeof(i) << endl;
	cout <<   sizeof(li) << endl;
	cout <<   sizeof(lli) << endl;
	cout << endl;
	cout << "The unsigned integers from shortest to longest" << endl;
	cout <<   sizeof(usi) << endl;
	cout <<   sizeof(ui) << endl;
	cout <<   sizeof(uli) << endl;
	cout <<   sizeof(ulli) << endl;
	cout << endl;

	cout << "The floating points from shortest to longest" << endl;
	cout <<   sizeof(f)  << endl;
	cout <<   sizeof(d)  << endl;
	cout <<   sizeof(ld) << endl;
	cout << endl;

	cout << "All pointers are addresses -- the same size" << endl;
	cout <<   sizeof(cp) << endl;
	cout <<   sizeof(ldp) << endl;

}
*/
