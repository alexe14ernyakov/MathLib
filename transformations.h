#ifndef MATH_TRANSFORMATIONS_H
#define MATH_TRANSFORMATIONS_H
#include <vector>
#include <iostream>
#include "complex.h"

#define _USE_MATH_DEFINES

namespace math {

    class Signal {
    private:
        complex* _subsequence;
        int _size;
    public:
        Signal();
        explicit Signal(int n);
        explicit Signal(std::vector<complex> source);
        Signal(complex* source, int size);

        const complex& operator[](int n) const;

        [[nodiscard]] int size() const;
        void print() const;
    };

}

    math::Signal discrete_hartley_transform(math::Signal primary);

#endif
