#pragma once

#include "shape.hpp"

namespace Geometry
{
    namespace Shape
    {
        class Rectangle:
            public Shape
        {
        public:
            Rectangle(float width, float height, int angle = 0);
        };
    }
}