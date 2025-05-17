#include <iostream>
#include "LinkedList.h"
#include "Pair.h"

int main() {
    setlocale(0, ".1251");
    Pair pair(1, 1.5);
    LinkedList<Pair> list1(5, pair);
    list1.push(pair);
    std::cout << list1 << std::endl;
    Pair pair2(2, 10);
    LinkedList<Pair> list2(5, pair2);
    std::cout << list2 << std::endl;
    LinkedList<Pair> list = list1 * list2;
    std::cout << list << std::endl;
    Iterator<Pair> it = list.first();
    for (; it != list.last(); it++) {
        std::cout << *it << " ";
    }
    std::cout << *it << std::endl;
    std::cout << "\n\n\n\n\n" << std::endl;
    LinkedList<double> list3(5, 4.5);
    list3.push(6);
    std::cout << list3 << std::endl;
    LinkedList<double> list4(5, 10);
    std::cout << list4 << std::endl;
    LinkedList<double> list34 = list3 * list4;
    std::cout << list34 << std::endl;
    Iterator<double> it2 = list34.first();
    for (; it2 != list34.last(); it2++) {
        std::cout << *it2 << " ";
    }
    std::cout << *it2;
    return 0;
}
