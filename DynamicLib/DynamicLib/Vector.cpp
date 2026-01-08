#include "Vector.h"
#include <cmath>

Vector::Vector(const Number& x_val, const Number& y_val) : _x(x_val), _y(y_val) {}

Number Vector::getRadius() const {
    return (_x * _x + _y * _y).sqrt();
}

Number Vector::getPolarAngle() const {
    return atan2(_y, _x);
}

Vector Vector::add(const Vector& other) const {
    return Vector(_x + other._x, _y + other._y);
}

Number Vector::getX() const { return _x; }
Number Vector::getY() const { return _y; }
void Vector::setX(const Number& x_val) {
    _x = x_val;
}
void Vector::setY(const Number& y_val) {
    _y = y_val;
}

const Vector VECTOR_ZERO(Number(0), Number(0));
const Vector VECTOR_ONE(Number(1), Number(1));