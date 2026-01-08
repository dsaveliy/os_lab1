#include "Number.h"
#include <cmath>

Number::Number(double val) : _value(val) {}

Number Number::operator+(const Number& other) const {
    return Number(_value + other._value);
}

Number Number::operator-(const Number& other) const {
    return Number(_value - other._value);
}

Number Number::operator*(const Number& other) const {
    return Number(_value * other._value);
}

Number Number::operator/(const Number& other) const {
    if (other._value == 0.0) { throw "Division by zero"; }
    return Number(_value / other._value);
}

Number Number::sqrt() const {
    return Number(std::sqrt(_value));
}

Number atan2(const Number& y, const Number& x) {
    return Number(std::atan2(y.getValue(), x.getValue()));
}

double Number::getValue() const {
    return _value;
}

void Number::setValue(double val) {
    _value = val;
}

bool Number::operator==(const Number& other) const {
    return _value == other._value;
}

bool Number::operator!=(const Number& other) const {
    return _value != other._value;
}

const Number ZERO(0.0);
const Number ONE(1.0);

Number createNumber(double value) {
    return Number(value);
}