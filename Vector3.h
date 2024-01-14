#ifndef VECTOR3_H
#define VECTOR3_H

#include <cassert>
#include <cmath>

class Vector3 {
public:
    double dim[3];

    // Constructors for both default case and custom case
    Vector3() : dim{ 0, 0, 0 } {}
    Vector3(double d0, double d1, double d2) : dim{ d0, d1, d2 } {}

    // Methods to access fields
    double d0() const { return dim[0]; }
    double d1() const { return dim[1]; }
    double d2() const { return dim[2]; }

    // Operations
    Vector3 operator~() const { return Vector3(-dim[0], -dim[1], -dim[2]); }

    double operator[](int i) const {
        assert(i >= 0 && i < 3);
        return dim[i];
    }

    double& operator[](int i) {
        assert(i >= 0 && i < 3);
        return dim[i];
    }

    Vector3& operator+=(const Vector3& vec) {
        dim[0] += vec.dim[0];
        dim[1] += vec.dim[1];
        dim[2] += vec.dim[2];

        return *this;
    }

    Vector3& operator+=(double val) {
        dim[0] += val;
        dim[1] += val;
        dim[2] += val;

        return *this;
    }

    Vector3& operator/=(double val) {
        dim[0] /= val;
        dim[1] /= val;
        dim[2] /= val;

        return *this;
    }

    double magnitude() const {
        return std::sqrt(dim[0] * dim[0] + dim[1] * dim[1] + dim[2] * dim[2]);
    }
};

#endif // VECTOR3_H
