#include "point.hpp"

Geometry::Point::Point(float x, float y):
    x(x),
    y(y)
{}

float Geometry::Point::get_x() const { return x; }
float Geometry::Point::get_y() const { return y; }

void Geometry::Point::move(float distance_x, float distance_y)
{
    x += distance_x;
    y += distance_y;
}

void Geometry::Point::move_to(float destination_x, float destination_y)
{
    x = destination_x;
    y = destination_y;
}

const Geometry::Point Geometry::Point::operator+(const Point &p)
{
     return {x + p.x, y + p.y};
}