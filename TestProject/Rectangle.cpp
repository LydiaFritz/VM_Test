#include "Rectangle.h"

Rectangle::Rectangle(double l, double w):len(l), wid(w)
{
}

double Rectangle::getArea() const
{
	return len*wid;
}

void Rectangle::setDimensions(double l, double w)
{
	len = l;
	wid = w;
}
