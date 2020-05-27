#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>

using namespace std;

class Rectangle {
private:
	double len, wid;
public:
	Rectangle(double l = 1, double w = 1);
	double getArea()const;
	void setDimensions(double l, double w);

	friend ostream& operator<<(ostream& out, const Rectangle& r) {
		out << r.len << "," << r.wid;
		return out;
	}

};

#endif
