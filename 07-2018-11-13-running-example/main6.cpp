#include <iostream>
#include <vector>
#include <limits>
using namespace std;

/*
 * Vectors:
 * 	A vector is a container very similar to a List in C++,
 * 	though although List is an Interface and vector is a real
 * 	class.
 * 	Full document here:
 * 	http://www.cplusplus.com/reference/vector/vector/
 *
 * 	Things to notice below
 * 	   -- The infinite "while true" loop
 * 	   -- Initialization of min and max to the limit values
 * 	   -- Syntax of the iterator
 * 	   -- Have to cast sum to float in order for mean not to be truncated
 */

/*
int main() {
	vector<int> v;

	// Infinite loop, remember 1 is TRUE
	while (1) {
		int i;
		cout << "Enter a number, negative to terminate: ";
		cin >> i;
		if (i < 0) {
			break;
		}
		v.push_back(i);
	}
	int max = numeric_limits<int>::min(),
			min = numeric_limits<int>::max(),
			sum = 0,
			count = 0;
	for (vector<int>::iterator iter = v.begin(); iter < v.end(); iter++) {
		int i = *iter;
		if (i > max) max = i;
		if (i < min) min = i;
		sum += i;
		count += 1;
	}

	cout << "You entered " << count << " values with min " << min <<
			" max " << max << " and mean " << (float)sum / count << endl;
}
*/
