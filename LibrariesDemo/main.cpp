#include <iostream>
#include <iomanip>
#include "Number.h"
#include "Vector.h"

int main() {
    std::cout << std::fixed << std::setprecision(3);

    std::cout << "Number:\n";
    Number a(5.0), b(2.0);
    std::cout << "a = " << a.getValue() << "\n";
    std::cout << "b = " << b.getValue() << "\n";
    std::cout << "a + b = " << (a + b).getValue() << "\n";
    std::cout << "a - b = " << (a - b).getValue() << "\n";
    std::cout << "a * b = " << (a * b).getValue() << "\n";
    std::cout << "a / b = " << (a / b).getValue() << "\n";
    std::cout << "sqrt(a) = " << a.sqrt().getValue() << "\n";
    std::cout << "atan2(a, b) = " << atan2(a, b).getValue() << "\n";
    std::cout << "ZERO = " << ZERO.getValue() << "\n";
    std::cout << "ONE  = " << ONE.getValue() << "\n";

    std::cout << "Vector:\n";
    Vector v1(Number(3.0), Number(4.0));
    Vector v2 = VECTOR_ONE;
    Vector v0 = VECTOR_ZERO;
    std::cout << "v1 = (" << v1.getX().getValue() << ", " << v1.getY().getValue() << ")\n";
    std::cout << "VECTOR_ZERO = (" << v0.getX().getValue() << ", " << v0.getY().getValue() << ")\n";
    std::cout << "VECTOR_ONE = (" << v2.getX().getValue() << ", " << v2.getY().getValue() << ")\n";
    std::cout << "Radius of v1 = " << v1.getRadius().getValue() << "\n";
    std::cout << "Angle of v1  = " << v1.getPolarAngle().getValue() << "\n";
    Vector aVec(Number(1.0), Number(2.0));
    Vector bVec(Number(3.0), Number(4.0));
    Vector cVec = aVec.add(bVec);
    std::cout << "aVec = (" << aVec.getX().getValue() << ", " << aVec.getY().getValue() << ")\n";
    std::cout << "bVec = (" << bVec.getX().getValue() << ", " << bVec.getY().getValue() << ")\n";
    std::cout << "cVec = aVec + bVec = (" << cVec.getX().getValue() << ", " << cVec.getY().getValue() << ")\n";

    return 0;
}
