#pragma once

#include "point.hpp"

namespace Geometry
{
	class Vector
	{
		Vector(float angle, float magnitude);
		Vector(float unit_x, float unit_y, float magnitude);

		void rotate(float degrees);
		void rotate_to(float angle_in_degrees);

		void add_magnitude(float amount);
		void multiply_magnitude(float amount);

		const Point get_end() const;
	private:
		void calculate_unit_vector();
		float angle, magnitude, unit_x, unit_y;
	};
}