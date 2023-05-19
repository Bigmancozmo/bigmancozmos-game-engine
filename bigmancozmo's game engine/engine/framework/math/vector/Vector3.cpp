#include "Vector3.h"

Vector3::Vector3()
{
	x = 0;
	y = 0;
}

Vector3::Vector3(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector3 Vector3::ZERO()
{
	return Vector2(0, 0);
}
