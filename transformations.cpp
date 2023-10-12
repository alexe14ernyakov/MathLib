#include "transformations.h"

math::Signal::Signal() {
    _size = 0;
    _subsequence = nullptr;
}

math::Signal::Signal(int n) {
    _size = n;
    _subsequence = new complex[n];
}

math::Signal::Signal(std::vector<complex> source) {
    _size = (int)source.size();
    _subsequence = new complex[_size];
    for(int i = 0; i < _size; i++){
        _subsequence[i] = source[i];
    }
}

math::Signal::Signal(math::complex *source, int size) {
    _size = size;
    _subsequence = new complex[size];
    for(int i = 0; i < size; i++){
        _subsequence[i] = source[i];
    }
}

math::Signal discrete_hartley_transform(math::Signal primary){

}

