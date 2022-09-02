// #pragma once
#ifndef POINT_H
#define POINT_H

#include <iostream>

class Point {
public:
	Point();

	Point(double x, double y);
	~Point();

	void pointPrint();
	int pointEqual(Point other);
	double pointDistance(Point other);
	double getX() const;
	double getY() const;
	void setX(double x);
	void setY(double y);
private:
	double x;
	double y;
};

std::ostream& operator<<(std::ostream& os, const Point& point);
	
#endif //POINT_H