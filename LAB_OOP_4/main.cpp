#include"Header.h"
#include <clocale>
int main()
{
    setlocale(LC_ALL, "rus");
	system("chcp 1251 >> null");
	int x, y, z;
	cout << "Введите три целых числа: ";
	cin >> x >> y >> z;
	triad tr1(x, y, z);
	cout << "\nПервая триада: ";
	tr1.print();

	cout << "\n\nВведите три целых числа: ";
	cin >> x >> y >> z;
	triad tr2(x, y, z);
	cout << "\nВторая триада: ";
	tr2.print();

	if (tr1 == tr2)
		cout << "\nТриады равны\n";
	else
		cout << "\nТриады не равны\n";

	Time t1;
	cin >> t1;
	cout << "\nВведённое время: "<<t1;

	Time t2;
	cout << "\n\nВведите новое время\n";
	cin >> t2;
	cout << "\nВведённое время: " << t2;

	if (t1 > t2)
		cout << "\n\nПервое время больше\n" << t1;
	else if (t1 < t2)
		cout << "\n\nВторое время больше\n"<<t2;
	else
		cout << "\nВременные промежутки равны" << t1 << " = " << t2;



	return 0;
}
