#pragma once

#include <vector>

#include "point.hpp"

namespace Geometry
{
    namespace Shape
    {
        class Shape
        {
        public:
            std::vector<Point> &get_points() const;

            void rotate(int degrees);
            void rotate_to(int angle);
        protected:
            Shape(int angle = 0);

            void calculate_rotation();

            std::vector<Point> points;

            int angle;
        };
    }
}