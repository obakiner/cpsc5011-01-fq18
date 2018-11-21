#include "contact-info.h"
#include <string>
using namespace std;

string pretty_string(ContactInfo c) {
	return "{" +
			to_string(c.idNumber) +
			"| " +
			c.name +
			" @ " +
			c.address +
			"}";
}
