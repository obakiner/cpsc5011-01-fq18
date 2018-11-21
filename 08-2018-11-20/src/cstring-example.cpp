#include <iostream>
#include <cstring>
using namespace std;

/*
 * A C-String is an array of char.  With a twist!
 * 		Since it is so cumbersome to carry around both the array and the length,
 * 		it was convenient to represent a string as a sequence of characters terminated
 * 		by a special null character \0
 * 		This is fine as long as
 * 		  * every time you create a string you append a null character
 * 		  * you use string libraries that respect the null
 * 		Two example of C string libraries
 * 		  * strcmp -- compare two strings
 * 		  * strncat -- concatenate two strings
 */

void cstring_example() {
	// These two statements are identical:
	//   char *aString;
	//   char anotherString[];

	// An assignment and initialization.  Also it null
	//  terminates the string.
	char* easyString = "abc";

	// If I declare an array of chars, it is a C-string
	//  only it is null terminated like this one.
	//  Try getting rid of the final null character and
	//  watch string library functions fail.

	char ca[] = {'a', 'b', 'c', '\0'};
	//cout << ca << endl;
	//cout << strlen(ca) << endl;

	// Example of a string library function that
	// concatenates two strings.  Note the complication of
	// having to allocate space in chars3 to hold the concatenated
	// string.

	// strncat
	char chars3[100] = "Short!";
	cout << strlen(chars3) << endl;
	cout << sizeof(chars3) << endl;
	int available = sizeof(chars3) - strlen(chars3) + 1;
	char chars4[] = "and sweet!";

	// Append the characters in string chars4 to the end
	// of chars3 -- chars 3 has "available" characters available,
	// so the function won't try to write more characters than that.

	strncat(chars3, chars4, available);
	cout << chars3 << endl;
	cout << strlen(chars3) << endl;
}
