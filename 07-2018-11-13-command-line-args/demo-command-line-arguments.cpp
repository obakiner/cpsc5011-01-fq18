#include <iostream>
using namespace std;

int main(int argc, char* args[]) {
	cout << "There are " << argc << " command line arguments" << endl;

	for (int i = 0; i < argc; i++) {
		cout << "Value of arg " << i << " is " << args[i] << endl;
	}
}
