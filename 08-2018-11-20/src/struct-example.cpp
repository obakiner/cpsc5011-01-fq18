#include <iostream>
#include "contact-info.h"

/*
 * Structs are slot/value structures built into the C language.
 * They are fairly obsolete due to C++ classes, but good to know about because they
 * are common in non-OO languages, and easy lightweight containers to use anyway.
 *
 * Also a reminder that you can build "modules" through .h / .cpp pairs.  Here our
 * struct ContactInfo acts as an ADT.  It has storage and setters and getters and a "method"
 * pretty_string.
 *
 */

void struct_example() {
	ContactInfo ci;
	ci.idNumber = 45;
	ci.name = "Donald Trump";
	ci.address = "1600 Pennsylvania Ave";
	cout << pretty_string(ci) << endl;
}
