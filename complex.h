#ifndef MATH_COMPLEX_H
#define MATH_COMPLEX_H
#include <cmath>
#include <stdexcept>
#include <ostream>

namespace math {
    class complex {
    private:
        double _x = 0;
        double _y = 0;
        double _r = 0;
        double _phi = 0;
    public:
        complex();
        explicit complex(int number);
        explicit complex(double number);
        complex(double x, double y);



        friend const complex operator+(const complex& first, const complex& second);
        friend const complex operator-(const complex& first, const complex& second);
        friend const complex operator*(const complex& first, const complex& second);
        friend const complex operator/(const complex& first, const complex& second);

        [[nodiscard]] double x() const;
        [[nodiscard]] double y() const;
        [[nodiscard]] double modulus() const;
    };
}

std::ostream& operator<<(std::ostream &stream, math::complex const& number);

#endif
