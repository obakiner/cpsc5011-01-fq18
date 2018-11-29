#include "wallet.h"
#include <iostream>
#include <math.h>
using namespace std;

Wallet::Wallet() {
	/*  Deleted */
}

Wallet::Wallet(unsigned int fives, unsigned int ones, unsigned int quarters,
		unsigned int dimes, unsigned int nickles, unsigned int pennies) {
	/*  Deleted */
}

double Wallet::dollarAmount() const {
	/*  Deleted */
}

Wallet Wallet::operator+ (const Wallet &w2) {
	/*  Deleted */
}

double Wallet::operator+ (const double &d) {
	/*  Deleted */
}

ostream& operator<<(ostream& o, const Wallet& wallet) {
	/*  Deleted */
}

Wallet Wallet::operator- (const double &d) {
	Wallet temp;
	if (dollarAmount() < d) {
		throw string("Insufficient funds");
	} else {
		/*  Deleted */
	}
		return temp;
}

double Wallet::operator[] (const int &i) {
	if (/* Deleted */) {
		/* Deleted */
	} else {
		throw "Invalid Index";
	}
}

bool Wallet::operator== (const Wallet &op2) {
	/* Deleted */
}
