#include <iostream>
#include <string>
using namespace std;

#include "rpc.h"

/*
 * Demo code for rock paper scissors.  Calls the library functions.
 * They are unimplemented, but you can see the structure.
 */
void demo_rock_paper_scissors() {
	cout << "Is valid choice should return 0: " <<
			is_valid_choice("") << endl;
	cout << "Who wins should return -1: " <<
			who_wins("","") << endl;
	cout << "Winning choice for should return empty string: " <<
			winning_choice_for("") << endl;
}

/*
 * Demo code for shopping -- read the items file and print some of
 * its contents.  Demonstrates file reads and vectors.
 */

const string ITEM_FILE_NAME = "items.txt";
#include <fstream>
#include <vector>

void demo_shopping() {
	ifstream inputFile;

	inputFile.open("items.txt");
	if (inputFile.fail()) {
		cout << "Open error!";
	}

	float taxRate;
	vector<string> products;
	vector<float> prices;

	inputFile >> taxRate;

	string product;
	float price;
	while (inputFile >> product) {
		products.push_back(product);
		inputFile >> price;
		prices.push_back(price);
	}

	inputFile.close();

	cout << "Tax rate is " << taxRate << "%" << endl;
	for (unsigned int i=0; i < products.size(); i++) {
		cout << products[i] << endl;
	}
}

int main() {
	demo_rock_paper_scissors();
	cout << endl;
	demo_shopping();
	return 0;
}
