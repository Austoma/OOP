#pragma once
#include <iostream>
using namespace std;

class Pair {
public:
    int a;
    double b;

    Pair(int a = 0, double b = 0.0);
    Pair(const Pair& p);
    ~Pair() = default;

    Pair& operator=(const Pair& p);
    Pair operator-(const Pair& p) const;
    Pair operator+(int a) const;
    Pair operator+(double b) const;
    Pair& operator++();
    Pair operator++(int);
    Pair operator+(const Pair& p) const;

    bool operator!=(const Pair& p) const;
    bool operator==(const Pair& p) const;
    bool operator>(const Pair& p) const;
    bool operator>=(const Pair& p) const;
    bool operator<=(const Pair& p) const;
    bool operator<(const Pair& p) const;

    Pair operator*(const Pair& p) const;

    friend istream& operator>>(istream& in, Pair& p);
    friend ostream& operator<<(ostream& out, const Pair& p);
};
