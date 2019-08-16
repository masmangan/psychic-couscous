#include <cmath>

#include "triangle.hpp"

float hip(float c1, float c2) {
	float h = c1 * c1 + c2 * c2;
	h = sqrt(h);
	return h;
}
