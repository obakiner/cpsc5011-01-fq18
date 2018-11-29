#include "lottery-machine.h"
#include <iostream>
#include <cstdlib>
#include <cmath>
#include <vector>
#include "winner.h"
using namespace std;

using namespace std;

// Makes sure all doubles are rounded to two decimal places
double toDollarAmount(double d) {
	return round(d*100)/100.0;
}

LotteryMachine::LotteryMachine() {
	/*  deleted */
}

LotteryMachine::LotteryMachine(const unsigned int lucky) {
	/* deleted */
}

void LotteryMachine::addBet(string name, unsigned int luckyNumber, double bet) {
	/* deleted */
}

void LotteryMachine::close() {
	_open = false;
}

vector<Winner> LotteryMachine::getWinners() {
	/* deleted */
}


void LotteryMachine::summarize() const {
	cout << "Lottery Machine Summary" << endl;
	cout << " The machine is " << (_open ? "OPEN" : "CLOSED") << endl;
	cout << " Lucky number is " << _winningNumber << endl;
	cout << " Bets are: " << endl;
	double totalBet = 0;
		/* deleted */
	cout << " Total bet: " << toDollarAmount(totalBet) << endl;
	cout << " Payout: " << toDollarAmount(totalBet * PAYOFF_PERCENTAGE) << endl;
}


