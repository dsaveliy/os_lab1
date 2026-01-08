#pragma once
#ifdef VECTOR_EXPORTS
#define VECTOR_API __declspec(dllexport)
#else
#define VECTOR_API __declspec(dllimport)
#endif

#include "Number.h"

class VECTOR_API Vector {
public:
    Vector(const Number& x_val = ZERO, const Number& y_val = ZERO);

    Number getRadius() const;
    Number getPolarAngle() const;

    Vector add(const Vector& other) const;

    Number getX() const;
    Number getY() const;
    void setX(const Number& x_val);
    void setY(const Number& y_val);

private:
    Number _x;
    Number _y;
};

extern VECTOR_API const Vector VECTOR_ZERO;
extern VECTOR_API const Vector VECTOR_ONE;