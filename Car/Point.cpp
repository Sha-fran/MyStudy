#include "Point.h"
#include <cmath>

	Point::Point(double x, double y) {
		// std::cout << __PRETTY_FUNCTION__ << std::endl;
		this->x = x;
		this->y = y;
	}

	Point::Point() {
		// std::cout << __PRETTY_FUNCTION__ << std::endl;
		this->x = 0.0;
		this->y = 0.0;
	}
	Point::~Point() {
		
	}

	double Point::getX() const {
		return this->x;
	}

	double Point::getY() const {
		return this->y;
	}

	void Point::setX(double x) {
		this->x = x;
	}

	void Point::setY(double y) {
		this->x = x;
	}

	void Point::pointPrint() {
		std::cout 	<< "(" 
					<< this->x 
					<< ", " 
					<< this->y 
					<< ")";
	}

	int Point::pointEqual(Point other) {
	    return this->x == other.x && this->y == other.y;
	}

	double Point::pointDistance(Point other) {
	    return hypot(other.x-this->x, other.y-this->y);
	}

std::ostream& operator<<(std::ostream& os, const Point& point) {
	os 	<< "("
		<< point.getX()
		<< ", "
		<< point.getY()
		<< ")";

	return os;
}

