#include "complex.h"

math::complex::complex(int number) {
    _x = (double)number;
    _y = 0;
    _r = number;
    if(number >= 0)
        _phi = 0;
    else
        _phi = 1.0;
}

math::complex::complex(double number) {
    _x = number;
    _y = 0;
    _r = number;
    if(number >= 0)
        _phi = 0;
    else
        _phi = 1.0;
}

math::complex::complex(double x, double y) {
    _x = x;
    _y = y;
    _r = sqrt(_x * _x + _y * _y);
    _phi = atan(_y/_x);
}

const math::complex math::operator+(const math::complex &first, const math::complex &second) {
    return math::complex(first._x + second._x, first._y + second._y);
}

const math::complex math::operator-(const math::complex &first, const math::complex &second) {
    return math::complex(first._x - second._x, first._y - second._y);
}

const math::complex math::operator*(const math::complex &first, const math::complex &second) {
    return math::complex(first._x * second._x - first._y * second._y, first._x * second._y + first._y * second._x);
}

const math::complex math::operator/(const math::complex &first, const math::complex &second) {
    if(second.modulus() == 0)
        throw std::invalid_argument("Division by zero");

    double x = (first._x * second._x + first._y * second._y)/(second._x * second._x + second._y + second._y);
    double y = (second._x * first._y - first._x * second._y)/(second._x * second._x + second._y + second._y);
    return complex(x, y);
}

double math::complex::modulus() const {
    return _r;
}



