#ifndef POINT_HPP
#define POINT_HPP

#include "Fixed.hpp"

class Point{

	private:

		Fixed const x;
		Fixed const y;
	
	public:

		Point();
		Point(const float f1, const float f2);
		Point(const Point &other);
		~Point();

		Fixed getX() const;
        Fixed getY() const;
		Point &operator=(const Point &ope);
		bool bsp(Point const &a, Point const &b, Point const &c, Point const &point);

};

#endif