#ifndef TASKSEVEN_ITERATOR_H
#define TASKSEVEN_ITERATOR_H

#include "Error.h"

template<typename T>
struct Point {
    T num;
    Point *next = nullptr;
};

template<typename T>
class Iterator {
private:
    Point<T> *elem = nullptr;
public:
    Iterator() : elem(nullptr) {}
    Iterator(Point<T>* p) : elem(p) {}
    Iterator(const Iterator &it);

    bool operator==(const Iterator &it);
    bool operator!=(const Iterator &it);
    void operator++();
    void operator++(int);
    Iterator &operator+(int n);
    T operator*() const;
};

#endif
