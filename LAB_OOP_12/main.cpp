#include <iostream>
#include <set>
#include "Pair.h"
using namespace std;

bool operator<(const Pair& pr1, const Pair& pr2) {
    return (pr1.a < pr2.a) || (pr1.a == pr2.a && pr1.b < pr2.b);
}

void processSet(multiset<Pair>& mst) {
    Pair sum;
    cout << "Исходное множество:\n";
    for (const auto& item : mst) {
        sum = sum + item;
        cout << item << endl;
    }

    // 1. Добавление среднего арифметического
    Pair average(sum.a / mst.size(), sum.b / mst.size());
    cout << "Среднее арифметическое: " << average << endl;
    mst.insert(average);

    // 2. Удаление элементов в диапазоне по ключу
    multiset<Pair> temp = mst;
    mst.clear();
    int i, j;
    Pair key;
    cout << "Введите диапазон (i j): ";
    cin >> i >> j;
    cout << "Введите ключ для удаления: ";
    cin >> key;

    Pair max = *temp.begin();
    Pair min = *temp.begin();
    int pos = 0;

    for (const auto& item : temp) {
        if (pos < i || pos > j || !(item == key)) {
            if (max < item) max = item;
            if (min > item) min = item;
            mst.insert(item);
        }
        pos++;
    }

    // 3. Добавление суммы min и max к каждому элементу
    cout << "Результат после добавления min и max:\n";
    temp = mst;
    mst.clear();
    Pair sumMinMax = min + max;

    for (const auto& item : temp) {
        Pair newItem = item + sumMinMax;
        mst.insert(newItem);
        cout << newItem << endl;
    }
}

int main() {
    setlocale(LC_ALL, "Russian");

    // Пример 1: работа с double
    multiset<double> doubleSet;
    // ... (аналогичная обработка для double)

    // Пример 2: работа с Pair
    multiset<Pair> pairSet;
    pairSet.insert(Pair(1, 1.5));
    pairSet.insert(Pair(1, -1.5));
    pairSet.insert(Pair(2, 2.3));
    pairSet.insert(Pair(2, 2.3));

    processSet(pairSet);

    return 0;
}
