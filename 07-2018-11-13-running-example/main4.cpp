#include <iostream>
using namespace std;

/*
 * Demonstrates three concepts
 * 1.  Overflow.  Since every type has a fixed amount of space allocated to it
 *     which limits the size of the (number) you store in it.  The question is
 *     what happens when you try to assign it a value that exeeds that limit.
 *     You would hope that the system would detect that condition and signal an
 *     error.  You would be wrong.  Which means as a developer you need to be aware
 *     of the limit, and aware of code that might overflow the storage.
 * 2. Arithmetic casts
 * 		We are familiar with casting from an int to a float, and a float to an int.
 * 		Does that work as expected?
 * 		But in C also we have the idea of other casts
 * 			int to long int   (smaller to bigger)
 * 			int to unsigned int  (bigger to smaller)
 * 			unsigned int to int  (smaller to bigger)
 *  3. Boolean
 *      Be aware that Boolean is numeric and any non-zero value is TRUE.
 *      You will see that the relational operators return 1 for TRUE and 0 for FALSE.
 *
 */

/*
#include <limits.h>
void overflow() {
	cout << INT_MIN << endl;
	cout << INT_MAX << endl;

	int i = INT_MAX + 1;
	cout << i << endl;
}

void casts() {
	int i = 100;
	unsigned int ui = 123;
	float f = 12345.6789;

	cout << "Int to float: " << (float) i << endl;
	cout << "Float to int: " << (int) f << endl;
	cout << "Positive Float to unsigned int " << (unsigned int) f << endl;
	cout << "Negative Float to unsigned int " << (unsigned int) -f << endl;
	cout << "Unsigned int to int " << (int) ui << endl;
	cout << "Unsigned int to float " << (float) ui << endl;
	cout << "Positive int to unsigned int " << (unsigned int) i << endl;
	cout << "Negative int to unsigned int " << (unsigned int) -i << endl;
	cout << "Positive Float to unsigned int " << (unsigned int) f << endl;
	cout << "Negative Float to unsigned int " << (unsigned int) -f << endl;
}

void boolean() {
	float f = 0.001;
	if (f) {
		cout << "Value " << f << " is TRUE" << endl;
	} else {
		cout << "Value " << f << " is FALSE" << endl;
	}

	bool b = (f > 0);
	cout << "Value of relational (f > 0) is " << b << endl;
	cout << "Value of relational (f < 0) is " << (f < 0) << endl;
}

int main() {
	overflow();
	cout << "=======\n";
	casts();
	cout << "=======\n";
	boolean();
}
*/
