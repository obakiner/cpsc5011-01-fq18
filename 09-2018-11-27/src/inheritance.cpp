#include <iostream>
using namespace std;

/*
 * Inheritance in C++ looks much like it does in Java except with some syntactic differences
 *
 * 1.  Create an Account class but give its constructor protected visibility -- in essence an abstract class
 * 2.  Create a CheckingAccount subclass with a per-transaction fee on withdrawals depending on a flag on the account.
 * 	   Also it wants to hide balance information.
 * 	   Make CheckingAccount want to expose balance, but it can't -- change visibility of the inheritance
 * 3.  Add the idea of an ID and add a new class IDHolder and have Account inherit from it.  Get the ID of a checking account
 *     pretty much for free!
 * 4.  Polymorphism and virtual methods.
 *        Add a savings account class and implement a type() method on them.  Add them all to a vector of Account*,
 *        and notice that the subclass information goes away
 * 5.  But notice the warning about non-virtual destructor.  Add one to Account and warning goes away.
 * 6.  Abstract base classes, pure virtual functions, and Java interfaces
 *       -- Suppose Account wants to require subclasses to implement a method accountType.  It declares that method to
 *           be pure virtual
 */

void inheritance() {

}

/* Multiple inheritance -- suppose Savings Account has the property that every time you
 * deposit money, you get bonus points, and you can also redeem bonus points.  There are other accounts that
 * have that kind of behavior.   So we create a BonusPoints class and let Savings Account inherit from it.
 */

void multiple_inheritance() {

}

/*
void printType(Account &a) {
	cout << a.type() << endl;
}

void multiple_inheritance();
void inheritance() {
	multiple_inheritance();
//	Account a;
//	a.deposit(20);
//	a.withdraw(10);
//	cout << a.getBalance() << endl;
	// Won't work, this constructor is protected
	//Account a2(100.0);
//	CheckingAccount ca(100.0, false);
//	ca.withdraw(10.0);
//	cout << ca.getBalance() << endl;
//	cout << ca.getID() << endl;
	SavingsAccount sa1, sa2;
	CheckingAccount ck3(100.0, true), ck4(200.0, false);
	vector<Account*> va;
//	va.push_back(&sa1);  va.push_back(&sa2);
//	va.push_back(&ck3); va.push_back(&ck4);
//	for (auto iter = va.begin(); iter < va.end(); iter++ ) {
//		Account* a = *iter;
//		cout << a->type() << endl;
//	}
}


void multiple_inheritance() {
	SavingsAccount sa1;
	sa1.deposit(100.0);
	cout << sa1.getBalance() << endl;
	cout << sa1.getPoints() << endl;

}
*/
