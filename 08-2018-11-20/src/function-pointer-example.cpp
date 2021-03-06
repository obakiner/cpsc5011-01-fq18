#include <iostream>
#include <string>
using namespace std;

int add(double a, double b) {
	return (int)a+b;
}

// The first argument of this function is itself a function.
// This fuction applies the first argument function to its
// other two arguments, and returns the result

int apply(int (*fp)(double, double) , double a, double b) {
	return (*fp)(a, b);
}

void function_pointer_example() {
	int (*fp)(double, double);
	fp = &add;
	double x = 1.5;
	double y = 2.3;
	cout << "Inputs are " << x << " and " << y << " output should be " << (int)(x + y) << endl;
	cout << apply(fp, x, y) << endl;

}
