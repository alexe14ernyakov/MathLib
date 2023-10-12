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

int math::Signal::size() const {
    return _size;
}

const math::complex &math::Signal::operator[](int n) const {
    return _subsequence[n];
}

void math::Signal::print() const {
    std::cout << "[ ";
    for(int i = 0; i < size(); i++){
        std::cout << _subsequence[i] << " ";
    }
    std::cout << "]" << std::endl;
}

[[maybe_unused]] math::Signal discrete_hartley_transform(math::Signal primary){
    auto* values = new math::complex[primary.size()];
    math::complex value;
    for(int k = 0; k < primary.size(); k++){
        value = math::complex();
        for(int i = 0; i < primary.size(); i++){
            value = value + primary[i] * math::complex( cos(2 * M_PI * i * k / primary.size()) + sin(2 * M_PI * i * k / primary.size()));
        }
        values[k] = value;
    }

    math::Signal result = math::Signal(values, primary.size());
    return result;
}

