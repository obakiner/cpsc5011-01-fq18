#include <iostream>
#include "contact-info.h"
using namespace std;

/*
 * Structs:
 * 	Structs are an old-school container technique:  basically fields with
 * 	getters and setters.  Except they aren't classes.
 * 	They are typically declared in a header file, then if you want to simulate
 * 	"instance methods" on them you put those in an implementation (cpp) file.
 * 	They aren't so useful in full C++ land since classes do the same thing.
 * 	But even so every so often they are a quick lightweight implementation solution.
 */

int main() {
	ContactInfo ci;

	ci.idNumber = 123;
	ci.name = "Donald Trump";
	ci.address = "1600 Pennsylvania Ave";

	cout << "Here is a pretty string for the contact with ID " << ci.idNumber << endl;
	cout << pretty_string(ci) << endl;
	cout << "This is how big a ContactInfo is: " << sizeof(ContactInfo) << ". Why is that?" << endl;
	cout << "This is how big a string is: " << sizeof(string) << ". Why is that?" << endl;
}
