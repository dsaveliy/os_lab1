#pragma once

class Number {
public:
    Number(double val = 0.0);

    Number operator+(const Number& other) const;
    Number operator-(const Number& other) const;
    Number operator*(const Number& other) const;
    Number operator/(const Number& other) const;
    Number sqrt() const;

    double getValue() const;
    void setValue(double val);

    bool operator==(const Number& other) const;
    bool operator!=(const Number& other) const;

private:
    double _value;
};

extern const Number ZERO;
extern const Number ONE;

Number atan2(const Number& y, const Number& x);
Number createNumber(double value);