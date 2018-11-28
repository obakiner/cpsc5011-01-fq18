#include <iostream>
using namespace std;
/*
 * Every class has a destructor that is called when the object is deleted.
 * A class can be deleted when
 *   * it goes out of scope
 *   * it explicitly gets deleted
 *
 * If all space is allocated on the stack, there is nothing to be done.
 * However, dynamically allocated space needs to be deallocated.
 *
 * First, give Rectangle a destructor and let it print a message.
 * Cases:
 *    Rectangle is allocated on the stack and goes out of scope
 *    Rectangle is allocated on the heap then gets deleted
 *
 *  Second, show an example where you really do need to free up allocated space:
 *     ContactInfo is a string storing a name, but the name variable is a C-String and
 *     is copied into the ContactInfo object.
 */

void destructor() {

}

/* CHEATING
#include "rectangle.h"
#include "contact-info.h"

void temp_rectangle() {
	cout << "In tmp rectangle" << endl;
	Rectangle r;
}

void destructor() {
	Rectangle *r = new Rectangle(3.0, 4.0);
	cout << "About to delete" << endl;
	delete r;
	cout << "Finished delete " << endl;
	temp_rectangle();
	ContactInfo *ci = new ContactInfo("hello");
	delete ci;
}

*/
