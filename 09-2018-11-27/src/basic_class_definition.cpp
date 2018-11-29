#include <iostream>
using namespace std;

/*
 * Basic class definition -- Rectangle as example with width and length, computed area
 *   * Separate class into declaration and definition
 *   * Declaration file
 *   * Definition file -- constructor, accessors, setters, others
 *
 *  Assignment scenarios:
 *    1.  Just declare one without any arguments.  What happens?
 *    2.  Add a two-place constructor.  What happens?
 *    3.  Compare addresses of assigned object -- they are different
 *         -- Introduce copy constructor
 */
#include "rectangle.h"

void test_destructor() {
	Rectangle r;
}
void basic_class_definition() {
	test_destructor();
	//Rectangle r;
	//delete &r;
	//Rectangle r2 = r;
	//cout << &r << endl;
	//cout << &r2 << endl;
	//cout << r.getWidth() << " " << r.getHeight() << endl;
}

/*  CHEATING
 *

Rectangle r(10.0, 15.0);
cout << r.getWidth() << " " << r.getHeight() << " " << r.getArea() << endl;
r.setWidth(2 * r.getWidth());
cout << r.getWidth() << " " << r.getHeight() << " " << r.getArea() << endl;

Rectangle rnull;
cout << rnull.getWidth() << " " << rnull.getHeight() << " " << rnull.getArea() << endl;
cout << &rnull << endl;

Rectangle rnew = rnull;
cout << rnew.getWidth() << " " << rnew.getHeight() << " " << rnew.getArea() << endl;
cout << &rnew << endl;
// What happens if we just print the object itself?
	//cout << r << endl;
	 * */
