#ifndef MATH_COMPLEX_H
#define MATH_COMPLEX_H

namespace math {
    class complex {
    private:
        double _x = 0;
        double _y = 0;
    public:
        explicit complex(int number);
        explicit complex(double number);
        complex(double x, double y);

        friend const complex operator+(const complex& first, const complex& second);
        friend const complex operator-(const complex& first, const complex& second);
    };
}
#endif
