#include <iostream>
#include <string>
#include <exception>
using namespace std;

/*
 * Input from the console:
 *    1.  The method of  cin >> variable works kind of like a scanner in
 *       that it picks up the next token (whitespace delimited) from the input
 *       stream and tries to convert it to the type of the variable.  Just
 *       like in casting, this doesn't always work.   Also, using this method
 *       doesn't work if you want a full line of input.
 *       Question:  why does it go into an infinite loop when input is invalid?
 *       How would you fix this?
 *    2.  You can use getline and supply a string which is comparable to readline
 *       in Java, but then you need methods to split the string into tokens,
 *       and to convert strings to numbers.
 */

void input_from_cin() {
	int i;
	cout << "This is reading from console to an unsigned int.  " << endl <<
			" Try both valid and invalid values.  " << endl <<
			" Also what happens if you type 32 x for example?" << endl;
	while (1) {
		cout << "Enter a number, -1 to stop: ";
		cin >> i;
		if (i == -1) {
			return;
		}
		cout << "Your number is  " << i << endl;
	}
}

void full_line_input() {
	string s;
	cout << "Enter whatever you want: " << endl;
	getline(cin, s);
	cout << "Your string is: " << s << endl;
	cout << "Do you think it is a number? " << endl;
	char c;
	cin >> c;
	if (c == 'y' || c == 'Y') {
		float f;
		try {
			f = stof(s);
			cout << "You were right, the value is " << f << endl;
		} catch (exception& e) {
			cout << "You were wrong about that, C++ says caused by  " << e.what() << endl;
		}
	}
	cout << "Bye!" << endl;
}

/***************************************************/

/*
int main() {
	//input_from_cin();
	cout << "=======\n";
	full_line_input();
}
*/
