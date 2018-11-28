/*
 * A lot of the "customization" work in C++ is done by overloading operators.
 * For example, if you want a custom print representation for a class in Java you
 * overload its toString method and the println method calls that method.  In C++
 * you just overload the << operator.
 *
 * Almost any operator can be overloaded
 *    Mathematical 			 + - * etc
 *    Relational	 		< > <= ==
 *    Assignment 			= += ++
 *    Array access  		[]
 *    Type conversion  		(double)
 *    Insertion and extraction   << >>
 *
 *  Examples -- work with OrderedPair
 *     * Adding two pairs
 *     * Relational operators == Equality and <
 *     * Array access
 *     * Custom printing
 */

void overloading() {

}

/* CHEATING
#include <iostream>
#include "ordered-pair.h"
using namespace std;


void overloading() {

	OrderedPair op1(2.0, 5.0), op2(-1.0, 7.0), op3;
	op3 = op1 + op2;
	cout << op3.getX() << " " << op3.getY() << endl;
	op3 = op3 + 12.0;
	cout << op3.getX() << " " << op3.getY() << endl;
	op3 = op3 + 5.0;
	cout << op3.getX() << " " << op3.getY() << endl;
	OrderedPair op4 = 6.0;
	cout << op4.getX() << " " << op4.getY() << endl;
	cout << (op3 == op4) << endl;
	OrderedPair op5(6.0, 6.0);
	cout << (op4 == op5) << endl;
	cout << op1[0] << " " << op1[1] << endl;
	//cout << op1[2] << endl;
	cout << "===== " << op2 << " =====" << endl;
	cout << "=== " << (double)op2 << " ===" << endl;

}
*/
