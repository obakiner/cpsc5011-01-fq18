#ifndef CONTACT_INFO_H_
#define CONTACT_INFO_H_
#include <string>
using namespace std;

struct ContactInfo {
	int idNumber;
	string name;
	string address;
};

string pretty_string(ContactInfo ci);

#endif /* CONTACT_INFO_H_ */
