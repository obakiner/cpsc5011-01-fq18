#ifndef ORDERED_PAIR_H_
#define ORDERED_PAIR_H_

class OrderedPair {
private:
	double _x;
	double _y;
	OrderedPair();
public:
	OrderedPair(double, double);
	~OrderedPair();
	double getX() const;
	double getY() const;
	OrderedPair operator+(const OrderedPair&);
};



#endif /* ORDERED_PAIR_H_ */
