/*
int main() {
	bool b;
	char c;
	char16_t c16;
	char32_t c32;
	wchar_t wc;
	short int si;
	int i;
	long int li;
	long long int lli;
	unsigned char uc;
	unsigned short int usi;
	unsigned int ui;
	unsigned long int uli;
	unsigned long long int ulli;
	float f;
	double d;
	long double ld;
	char *cp;

	cout <<   sizeof(b)  << endl;
	cout <<  sizeof(c) << endl;
	cout <<   sizeof(c16) << endl;
	cout <<   sizeof(c32) << endl;
	cout <<   sizeof(wc) << endl;
	cout <<   sizeof(si) << endl;
	cout <<   sizeof(i) << endl;
	cout <<   sizeof(li) << endl;
	cout <<   sizeof(lli) << endl;
	cout <<   sizeof(uc) << endl;
	cout <<   sizeof(usi) << endl;
	cout <<   sizeof(ui) << endl;
	cout <<   sizeof(uli) << endl;
	cout <<   sizeof(ulli) << endl;
	cout <<   sizeof(f)  << endl;
	cout <<   sizeof(d)  << endl;
	cout <<   sizeof(ld) << endl;
	cout <<   sizeof(cp) << endl;

}
*/

/*  OVERFLOW
 #include <limits.h>
int main() {
	cout << INT_MIN << endl;
	cout << INT_MAX << endl;

	int i = INT_MAX + 1;
	cout << i << endl;
}
 *
 */

/*  ARITHMETIC CASTS
 #include <limits.h>
int main() {
	float f = 3.14159;
	long long int lli = INT_MAX + 100L;

	int i = (int)lli;
	cout << i << endl;

	i = (int) f;
	cout << i << endl;
}

 */

/* BOOLEAN
 int main() {
	float f = 0.001;
	if (f) {
		cout << "TRUE" << endl;
	} else {
		cout << "FALSE" << endl;
	}
}

 */

/*  SIMPLE READING OF NUMERICS
 * int main() {
	unsigned int i;
	cout << "Enter a number between 1 and 10: ";
	cin >> i;
	cout << "Your number is  " << i << endl;
}
*/

/* STRINGS
#include <string>
int main(int argc, char* args[]) {
	string s = "Hello";
	cout << s <<  " " << "world " << endl;
}

// String documentation
// http://www.cplusplus.com/reference/string/string/

// STRINGS AND INPUT
#include <string>
int main(int argc, char* args[]) {
	string s;
	cout << "Your name: " << endl;
	getline(cin, s);
	cout << s << endl;
	int i = stoi(s);
	cout << i + 1 << endl;
}
// String documentation
// http://www.cplusplus.com/reference/string/string/

 */
/*  VECTORS
#include <vector>
int main() {
	vector<int> v;
	while (1) {
		int i;
		cout << "Enter a number, negative to terminate: ";
		cin >> i;
		if (i < 0) {
			break;
		}
		v.push_back(i);
	}
	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++) {
		cout << *iter << endl;
	}
}

// Vector doc
//  http://www.cplusplus.com/reference/vector/vector/
*/
/*  Functions
string greet(string name) {
	if (name.length() == 0) {
		return "Hello Noname";
	} else {
		return "Hello " + name;
	}
}

int main(int argc, char* args[]) {
	string name;
	if (argc > 0) {
		name = args[2];
	}
	cout << greet(name) << endl;
}
*/

/*
 *
 //  FUNCTIONS WITH REFERENCE ARGUMENTS
 * void clear(string s) {
	s.clear();
}

void rclear(string &s) {
	s.clear();
}

void swap(int &x, int &y) {
	int tmp = x;
	x = y;
	y = tmp;
}

int main() {
	string s = "hello";
	rclear(s);
	cout << s << endl;
	int ii = 3;
	int jj = 4;
	swap(ii, jj);
	cout << ii << " " << jj << endl;
}
 *
 */

/*
// STRUCT
 *
 * #include "contact-info.h"

int main() {
	ContactInfo ci;
	ci.idNumber = 4;
	ci.name = "Sally Smith";
	ci.phone = "2069999999";

	displayContactInfo(ci);

}

#ifndef CONTACT_INFO_H_
#define CONTACT_INFO_H_
#include <string>
struct ContactInfo {
	int idNumber;
	string name;
	string phone;
};

void displayContactInfo(ContactInfo ci);

#endif
 */


