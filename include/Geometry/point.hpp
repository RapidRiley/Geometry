#pragma once

namespace Geometry
{
    class Point
    {
    public:
        Point(float x, float y);

        float get_x() const;
        float get_y() const;

        void move(float distance_x, float distance_y);
        void move_to(float destination_x, float destination_y);

        const Point operator+(const Point &p);
    private:
        float x, y;
    };
}