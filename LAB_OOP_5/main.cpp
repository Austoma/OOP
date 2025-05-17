#include"Header.h"
#include <clocale>
int main()
{
    setlocale(LC_ALL, "rus");
	system("chcp 1251 >> null");

	Vector vec(2);
	triad tr;
	Time tim;
	int x, y, z;

	cout << "Введите триаду:\n";
	cout << "Введите первое число триады: ";
	cin >> x;
	tr.setFirst(x);

	cout << "Введите второе число триады: ";
	cin >> y;
	tr.setSecond(y);

	cout << "Введите третье число триады: ";
	cin >> z;
	tr.setThird(z);

	cout << "Триада: ";
	tr.print();

	cout << "\n\nВведите время:\n";
	cin >> tim;
	cout << tim;

	triad* pr = &tr;
	vec.fillVector(pr);

	pr = &tim;
	vec.fillVector(pr);

	cout << "\n\nВектор:\n";
	cout << vec;

	return 0;
}
