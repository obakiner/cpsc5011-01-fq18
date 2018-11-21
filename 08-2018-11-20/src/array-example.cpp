#include <iostream>
#include <cstdlib>
#include <ctype.h>
using namespace std;

/*
 * Arrays in C/C++   (Not vectors)
 *
 * 0.  An array in C like in Java is a sequence of values of the same type, addressable by index.
 *
 * 1.  What an array really is
 * 2.  Closest to the metal way to allocate space for an array (array on the heap)
 * 4.  Iterating through an array
 * *   Bracket notation
 * 5.  Allocating an array on the stack
 * 6.  Array initialization
 * 7.  Range-based for loop
 * 8.  Passing arrays as arguments
 * 9.  Returning arrays as result
 *
 */
/*

int* giveMeInts(int c1, int c2, int &length) {
	length = c2 - c1 + 1;
	int* outchar = (int*)malloc(length * sizeof(int*));
	for (int i = 0; i < length; i++) {
		outchar[i] = c1 + i;
	}
	return outchar;
}

void downcaseArray(char ca[], unsigned int size) {
	for (unsigned int i = 0; i < size; i++) {
		ca[i] = tolower(ca[i]);
	}
}
*/

void array_example() {

	// Close to the metal -- arrays are pointers!
	bool* boolArray;
	const int BOOL_ARRAY_SIZE = 2;
	boolArray = (bool*)malloc(BOOL_ARRAY_SIZE * sizeof(bool));
	*(boolArray+0) = true;
	*(boolArray+1) = false;
	cout << "See Boolean Array " << endl;
	for (int i=0; i < BOOL_ARRAY_SIZE; i++) {
		cout << *(boolArray+i) << endl;
	}
	cout << "See Boolean Array Size " << endl;
	cout << sizeof(boolArray) << endl;
	free(boolArray);
/*
	// This does exactly the same thing only uses bracket notation
	int FLOAT_ARRAY_SIZE = 3;
	float floatArray[FLOAT_ARRAY_SIZE];
	floatArray[0] = 1.0;
	floatArray[1] = 2.0;
	floatArray[2] = 3.0;
	cout << "See Float Array " << endl;
	for (int i=0; i < FLOAT_ARRAY_SIZE; i++) {
		cout << floatArray[i] << endl;
	}
	free(floatArray);

	// Demonstrates initialization and also C++ extension:  range-based for loop
	const int CHAR_ARRAY_SIZE = 4;
	char charArray[]  = {'A', 'b', 'C', 'd'};
	cout << "See Char Array " << endl;
	for (char c : charArray) {
		cout << c << endl;
	}

	// Demonstrates sending an array as a function argument
	downcaseArray(charArray, CHAR_ARRAY_SIZE);
	cout << "See Downcased Char Array " << endl;
	for (char c : charArray) {
		cout << c << endl;
	}
	free(charArray);

	cout << "See Downcased Char Array AFTER DEALLOCATION! " << endl;
	for (char c : charArray) {
		cout << c << endl;
	}

	// Demonstrates returning an array from a function
	int ll = 0;
	int* ints = giveMeInts(25, 37, ll);
	cout << "See Ints " << endl;
	cout << "Length is " << ll << endl;
	for (int i=0; i < ll; i++) {
		cout << ints[i] << endl;
	}

	// C++ idiom  -- new and delete
	int *anInt = new int;
	*anInt = 3;
	int *intArray = new int[5];
	for (int i = 0; i < 5; i++) {
		intArray[i] = 5-i;
	}
	cout << "See Int Array " << endl;
	for (int i = 0; i < 5; i++) {
		cout << intArray[i] << endl;
	}
	delete anInt;
	delete [] intArray;*/
}
