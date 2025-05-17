#include "Pair.h"

Pair::Pair() : numINT(0), numDOUBLE(0) {}

Pair::Pair(int a, double b) : numINT(a), numDOUBLE(b) {}

Pair& Pair::operator=(const Pair &pair) {
    numINT = pair.numINT;
    numDOUBLE = pair.numDOUBLE;
    return *this;
}

Pair& Pair::operator=(int k) {
    numINT = k;
    numDOUBLE = k;
    return *this;
}

Pair Pair::operator*(Pair &pair) {
    return Pair(numINT * pair.numINT, numDOUBLE * pair.numDOUBLE);
}

std::ostream& operator<<(std::ostream &out, const Pair &pair) {
    out << pair.numINT << ":" << pair.numDOUBLE;
    return out;
}

std::istream& operator>>(std::istream &in, Pair &pair) {
    in >> pair.numINT >> pair.numDOUBLE;
    return in;
}
