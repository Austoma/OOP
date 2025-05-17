#ifndef TASKSEVEN_PAIR_H
#define TASKSEVEN_PAIR_H

#include <iostream>

class Pair {
public:
    int numINT;
    double numDOUBLE;

    Pair();
    Pair(int a, double b);

    Pair& operator=(const Pair &pair);
    Pair& operator=(int k);
    Pair operator*(Pair &pair);

    friend std::ostream& operator<<(std::ostream &out, const Pair &pair);
    friend std::istream& operator>>(std::istream &in, Pair &pair);
};

#endif
