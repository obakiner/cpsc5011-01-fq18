#include <iostream>
using namespace std;
#include "greet.h"
#include <string>

/*
 * In this iteration we work on moving part of the greeting out into a different function/module.
 * Notice we separate the "declaration" of the function greet from its implementation.
 *    the declaration is in the include file greet.h, and the implementation is in greet.cpp
 * Notice that both greet.cpp and greet.h include this file.
 */

/*
int main() {
	string name = "world";
	cout << greet(name) << endl;
}
*/
