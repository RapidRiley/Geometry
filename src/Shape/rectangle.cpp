#include "rectangle.hpp"

Geometry::Shape::Rectangle::Rectangle(float width, float height, int angle):
    Shape(angle)
{
    points = {
        Point(-(width / 2), -(height / 2)),
        Point( (width / 2), -(height / 2)),
        Point( (width / 2),  (height / 2)),
        Point(-(width / 2),  (height / 2))
    };
}