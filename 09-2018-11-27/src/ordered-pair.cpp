#include <iostream>
#include "ordered-pair.h"
using namespace std;

OrderedPair::OrderedPair(double x, double y) {
	_x = x;
	_y = y;
	cout << "Constructor " << _x << " " << _y << endl;

}

OrderedPair::~OrderedPair() {
	cout << "Nuking " << _x << " " << _y << endl;
}

double OrderedPair::getX() const {
	return _x;
}
double OrderedPair::getY() const { return _y;}

OrderedPair OrderedPair::operator+(const OrderedPair &p) {
	OrderedPair op(_x+p._x, _y + p._y);
	return op;
}

/*
OrderedPair OrderedPair::operator+ (const OrderedPair &op2) {
	OrderedPair temp;
	temp._x = _x + op2._x;
	temp._y = _y + op2._y;
	return temp;
}
*/
