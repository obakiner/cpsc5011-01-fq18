#include <iostream>
#include "rectangle.h"
using namespace std;

Rectangle::Rectangle() {
	cout << "In constructor " << endl;
	_width = 0;
	_height = 0;
	_things = new int;
}

Rectangle::Rectangle(const Rectangle &r) {
	cout << "In copy constructor\n";
	_width = r._width;
	_height = r._height;
	_things = r._things;
}
Rectangle::Rectangle(int width, int height) {
	_width = width;
	_height = height;
	_things = 0;
}

Rectangle::~Rectangle() {
	cout << "In destructor" << endl;
	if(_things) {
		free(_things);
	}
}
int Rectangle::getWidth() const {
	return _width;
}

int Rectangle::getHeight() const {
	return _height;
}

int Rectangle::getArea() const {
	return _height * _width;
}
