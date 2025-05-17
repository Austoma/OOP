#ifndef TASKSEVEN_LINKEDLIST_H
#define TASKSEVEN_LINKEDLIST_H

#include <iostream>
#include <algorithm>
#include "Iterator.h"
#include "Error.h"

template<typename T>
class LinkedList {
private:
    size_t size = 0;
    Point<T> *head = nullptr;
    Point<T> *top = nullptr;

    void output(Point<T> *obj) const;

public:
    LinkedList();
    LinkedList(size_t s, T k);
    ~LinkedList();
    LinkedList(const LinkedList<T> &list);

    void push(T k);
    T pop();
    void show() const;

    T& operator[](int index) const;
    int operator()();
    LinkedList& operator=(const LinkedList<T> &list);
    LinkedList operator*(LinkedList<T> &list);

    Iterator<T> first();
    Iterator<T> last();

    friend std::ostream &operator<<(std::ostream &out, const LinkedList<T> &list) {
        list.show();
        return out;
    }

    friend std::istream &operator>>(std::istream &in, LinkedList<T> &list) {
        T k;
        in >> k;
        list.push(k);
        return in;
    }
};

#endif
