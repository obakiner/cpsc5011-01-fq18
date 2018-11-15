#include <string>
#include "greet.h"

using namespace std;

/*
 * The function implementation -- notice it includes its declaration. in greet.h
 * It doesn't actually need the declaration, but this ensures the declaration and implementation
 * agree with each other
 *
 */

string greet(string s) {
	return "An external function says: Hello " + s;
}

