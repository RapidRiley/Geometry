#define _USE_MATH_DEFINES

#include "vector.hpp"

#include <cmath>

Geometry::Vector::Vector(float angle, float magnitude):
	angle(angle),
	unit_x(0),
	unit_y(0),
	magnitude(magnitude)
{}

Geometry::Vector::Vector(float unit_x, float unit_y, float magnitude):
	angle(0),
	unit_x(unit_x),
	unit_y(unit_y),
	magnitude(magnitude)
{}

void Geometry::Vector::rotate(float degrees)
{
	if(degrees != 0)
	{
		angle += degrees;
		calculate_unit_vector();
	}
}

void Geometry::Vector::rotate_to(float angle_in_degrees)
{
	if(angle != angle_in_degrees)
	{
		angle = angle_in_degrees;
		calculate_unit_vector();
	}
}

void Geometry::Vector::add_magnitude(float amount)
{
	magnitude += amount;
}

void Geometry::Vector::multiply_magnitude(float amount)
{
	magnitude *= amount;
}

const Geometry::Point Geometry::Vector::get_end() const
{
	return {unit_x * magnitude, unit_y * magnitude};
}

void Geometry::Vector::calculate_unit_vector()
{
	float radians = angle * ((float)M_PI / 180);
	unit_x = sin(radians);
	unit_y = cos(radians);
}