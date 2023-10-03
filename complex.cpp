#include "complex.h"

math::complex::complex(int number) {
    _x = (double)number;
    _y = 0;
}

math::complex::complex(double number) {
    _x = number;
    _y = 0;
}

math::complex::complex(double x, double y) {
    _x = x;
    _y = y;
}

const math::complex math::operator+(const math::complex &first, const math::complex &second) {
    return math::complex(first._x + second._x, first._y + second._y);
}

const math::complex math::operator-(const math::complex &first, const math::complex &second) {
    return math::complex(first._x - second._x, first._y - second._y);
}

