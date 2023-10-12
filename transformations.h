#ifndef MATH_TRANSFORMATIONS_H
#define MATH_TRANSFORMATIONS_H
#include <vector>
#include "complex.h"

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
    };

    [[maybe_unused]] Signal discrete_hartley_transform(Signal primary);

}

#endif
