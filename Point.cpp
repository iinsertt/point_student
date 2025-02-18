#include "Point.h"

int Point::get_x() const
{
	return Point::x;
}
int Point::get_y() const
{
	return Point::y;
}
int Point::get_z() const
{
	return Point::z;
}

void Point::set_x(int new_x)
{
	Point::x = new_x;
} void Point::set_y(int new_y)
{
	Point::y = new_y;
} void Point::set_z(int new_z)
{
	Point::z = new_z;
}