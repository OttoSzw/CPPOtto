#include "Point.hpp"

Point::Point() : x(0), y(0)
{
}

Point::Point(const float f1, const float f2) : x(f1), y(f2)
{
}

Point::Point(const Point &copy)
{
	*this = copy;
}

Point &Point::operator=(const Point &ope)
{
	if (this != &ope)
	{
		this->getX() = ope.getX();
		this->getY() = ope.getY();
	}
	return *this;
}

Point::~Point()
{
}

Fixed Point::getX() const
{
	return x;
}

Fixed Point::getY() const
{
	return y;
}

bool Point::bsp(Point const &a, Point const &b, Point const &c, Point const &point)
{
	Fixed wA = ((b.getY() - c.getY()) * (point.getX() - c.getX()) + (c.getX() - b.getX()) * (point.getY() - c.getY())) /
			   ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	Fixed wB = ((c.getY() - a.getY()) * (point.getX() - c.getX()) + (a.getX() - c.getX()) * (point.getY() - c.getY())) /
			   ((b.getY() - c.getY()) * (a.getX() - c.getX()) + (c.getX() - b.getX()) * (a.getY() - c.getY()));
	Fixed wC = Fixed(1.0f) - wA - wB;

	if (wA >= 0 && wB >= 0 && wC >= 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}
