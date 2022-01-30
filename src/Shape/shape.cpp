#define _USE_MATH_DEFINES

#include "shape.hpp"

#include <cmath>

Geometry::Shape::Shape::Shape(int angle):
    angle(angle)
{}      

std::vector<Geometry::Point> &Geometry::Shape::Shape::get_points() const
{
    return const_cast<std::vector<Point>&>(points);
}

void Geometry::Shape::Shape::rotate(int degrees)
{
    if(degrees != 0)
    {
        angle += degrees;
        calculate_rotation();
    }
}

void Geometry::Shape::Shape::rotate_to(int angle)
{
    if(this->angle != angle)
    {
        this->angle = angle;
        calculate_rotation();
    }
}

void Geometry::Shape::Shape::calculate_rotation()
{
	float radians = angle * ((float)M_PI / 180);
    float sin = std::sin(radians);
    float cos = std::cos(radians);
    float px = 0.f, py = 0.f;

    for(auto &point: points)
    {
        px = point.get_x();
        py = point.get_y();
        point.move_to(
            (px * cos) - (py * sin),
            (px * sin) + (py * cos)
        );
    }
}