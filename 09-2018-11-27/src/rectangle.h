#ifndef RECTANGLE_H_
#define RECTANGLE_H_

class Rectangle {
private:
	int _width;
	int _height;
	int *_things;

public:
	Rectangle();
	Rectangle(int, int);
	Rectangle(const Rectangle&);
	~Rectangle();
	int getWidth() const;
	int getHeight() const;
	int getArea() const;
	//void setWidth(const double);
	//void setHeight(const double);
};

#endif /* RECTANGLE_H_ */
