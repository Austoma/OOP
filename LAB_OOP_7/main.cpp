#include "List.h"
#include "Pair.h"
#include <clocale>
int main()
{
    setlocale(LC_ALL, "rus");
	system("chcp 1251 >> null");

	List<int> a, b, c;

	for (int i = 0; i < 5; i++)
	{
		a.push_back(i + 2);
	}

	for (int i = 0; i < 4; i++)
	{
		b.push_back(i-1);
	}

	cout << "Лист а:\n";
	a.show_list();

	cout << "\nЛист b:\n";
	b.show_list();

	cout << "\nЛист с = a*b :\n";
	c = a * b;
	c.show_list();
	cout << "\nРазмер листа c: " << c() << endl << endl;
	cout << "\nприсвоить c[5] = 150" << endl; c[5] = 150;
	cout << "\nЛист с:\n";
	c.show_list();

	List<Pair> p;
	Pair x;

	for (int i = 0; i < 3; i++)
	{
		cout << "\nВведите пару:\n";
		cin >> x;
		p.push_back(x);
	}

	cout << "\nСписок p: ";
	p.show_list();

	return 0;
}
