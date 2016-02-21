//
// Created by ossama on 21/02/16.
//

#include "cpp_tour/Vector.h"

Vector::Vector(int s) :
        elem{new double[s]},
        sz{s}
        {}

double& Vector::operator[](int i) {
    return elem[i];
}

int Vector::size() {
    return sz;
}