#include "Pair.h"
#include <iostream>
#include <list>
#include <queue>
#include <numeric>
#include <algorithm>
#include <map>
using namespace std;

void ex_1()
{
	cout << "Введите размер листа: " << endl;
	int n;
	cin >> n;
	list<Pair> lst;
	Pair p;
	for (int i = 0; i < n; i++)
	{
		cin >> p;
		lst.push_back(p);
	}

	//1
	Pair sr = accumulate(lst.begin(), lst.end(), Pair(0, 0));
	sr.a = sr.a / lst.size();
	sr.b = sr.b / lst.size();
	lst.push_back(sr);
	cout << "Среднее:\n";
	for_each(lst.begin(), lst.end(), [](Pair p) {cout << p << endl; });

	//2
	cout << "Введите удаляемое: " << endl;
	cin >> p;
	auto it = remove(lst.begin(), lst.end(), p);
	lst.erase(it, lst.end());
	cout << "Удаление заданного: " << endl;
	for_each(lst.begin(), lst.end(), [](Pair p) {cout << p << endl; });

	//3
	cout << "Добавление макс и мин: " << endl;
	Pair max = *max_element(lst.begin(), lst.end());
	Pair min = *min_element(lst.begin(), lst.end());
	for (Pair& c : lst)
	{
		c = c + max + min;
		cout << c << endl;
	}
}
bool operator<(const Pair& pr1, const Pair& pr2)
{
	return ((pr1.a < pr2.a) && (pr1.b < pr2.b));
}
void ex_2()
{
	priority_queue <Pair> lst;
	priority_queue <Pair> tmp;
	lst.push(Pair(1, 1.5));
	lst.push(Pair(-2, 2.7));
	lst.push(Pair(3, -3.2));
	cout << "Изначальный список:\n";

	//1
	Pair sr(0, 0);
	while (!lst.empty())
	{
		cout << lst.top() << endl;
		sr = sr + lst.top();
		tmp.push(lst.top());
		lst.pop();
	}
	sr.a /= tmp.size();
	sr.b /= tmp.size();

	cout << "Среднее ариф., добавленное в конец:\n";
	while (!tmp.empty())
	{
		cout << tmp.top() << endl;
		lst.push(tmp.top());
		tmp.pop();
	}
	lst.push(sr);
	cout << sr << endl;

	//2
	int k = 1;
	int i, j;
	Pair res;
	cout << "Диапозон: "; cin >> i >> j;
	cout << "Ключ: ";  cin >> res;
	while (!lst.empty())
	{
		if ((k < i) || (k > j) || (res != lst.top()))
		{
			tmp.push(lst.top());
		}
		lst.pop();
		k++;
	}
	cout << "Удаленные элементы из заданного диапозона:\n";
	Pair max = tmp.top();
	Pair min = tmp.top();
	while (!tmp.empty())
	{
		if (max < tmp.top()) max = tmp.top();
		if (tmp.top() < min) min = tmp.top();
		cout << tmp.top() << endl;
		lst.push(tmp.top());
		tmp.pop();
	}

	//3
	cout << "Добавить макс. и мин. к каждому элементу:\n";
	while (!lst.empty())
	{
		tmp.push(max + min + lst.top());
		lst.pop();
	}
	while (!tmp.empty())
	{
		lst.push(tmp.top());
		cout << tmp.top() << endl;
		tmp.pop();
	}
}

void ex_3() {
    LinkedList<Pair> lst;
    lst.push(Pair(1, 1.5));
    lst.push(Pair(-2, 2.7));
    lst.push(Pair(3, -3.2));
    cout << "Изначальный список:\n";
    show_lst(lst);

    // 1. Среднее арифметическое
    Pair sum;
    for (auto it = lst.begin(); it != lst.end(); ++it) {
        sum = sum + *it;
    }
    Pair average(sum.a / lst(), sum.b / lst());
    lst.push(average);
    cout << "Среднее арифм., добавленное в конец:\n";
    show_lst(lst);

    // 2. Удаление элементов из диапазона
    LinkedList<Pair> temp;
    while (lst()) {
        temp.push(lst.pop());
    }

    int i, j;
    Pair key;
    cout << "Диапазон: "; cin >> i >> j;
    cout << "Ключ: "; cin >> key;

    int pos = 1;
    while (temp()) {
        Pair current = temp.pop();
        if (pos < i || pos > j || current != key) {
            lst.push(current);
        }
        pos++;
    }
    cout << "Удаленные элементы из заданного диапазона:\n";
    show_lst(lst);

    // 3. Добавление max и min к каждому элементу
    if (lst()) {
        Pair max = lst[0], min = lst[0];
        for (auto it = lst.begin(); it != lst.end(); ++it) {
            if (*it > max) max = *it;
            if (*it < min) min = *it;
        }

        for (int idx = 0; idx < lst(); idx++) {
            lst[idx] = lst[idx] + max + min;
        }
        cout << "Добавить макс. и мин. к каждому элементу:\n";
        show_lst(lst);
    }
}
int main()
{
	setlocale(0, "rus");
	// ex_1();
	// ex_2();
	ex_3();
	return 0;
}
