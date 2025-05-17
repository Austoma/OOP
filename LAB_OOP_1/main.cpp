#include "Fraction.h"

fraction make_fraction(double F, int S)
{
	fraction t;//создали временную переменную
	t.Init(F, S);//инициализировали пол€ переменной t с помощью параметров функции
	return t;//вернули значение переменной t
}

int main()
{
	//определение переменных ј и ¬
	fraction A;
	fraction B;
	A.Init(3.0, 2);//инициализаци€ переменной ј
	B.Read();//ввод полей переменных ¬
	A.Show();//вывод значений полей переменной ј
	B.Show();//вывод значений полей переменной ¬
	//вывод значени€ степени, вычисленного с помощью функции Element(5)
	cout << "A.Power(" << A.first << "," << A.second << ")=" << A.Element(5) << endl;
	cout << "B.Power(" << B.first << "," << B.second << ")=" << B.Element(5) << endl;
	//указатели
	fraction* X = new fraction;//выделение пам€ти под динамическую переменную
	X->Init(2.0, 5);//инициализаци€
	X->Show();//вывод значений полей
	X->Element(5);//вычисление степени
	cout << "X.Element(" << X->first << "," << X->second << ")=" << X->Element(5) << endl;
	//массивы
	delete X;
	fraction mas[3];//определение массива
	for (int i = 0; i < 3; i++)
		mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		mas[i].Show(); //вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		mas[i].Element(5); //вычисление степени
		cout << "mas[" << i << "].Power(" << mas[i].first << "," << mas[i].second << ")=";
		cout << mas[i].Element(5) << endl;
	}
	//динамические масивы
	fraction* p_mas = new fraction[3];//выделение пам€ти
	for (int i = 0; i < 3; i++)
		p_mas[i].Read();//чтение значений полей
	for (int i = 0; i < 3; i++)
		p_mas[i].Show();//вывод значений полей
	for (int i = 0; i < 3; i++)
	{
		p_mas[i].Element(5);//вычисление степени
		cout << "p_mas[" << i << "].Power(" << p_mas[i].first << "," << p_mas[i].second;
		cout << ")=" << p_mas[i].Element(5) << endl;
	}
	delete[] p_mas;
	//вызов функции make_fraction()
	double y; int z;
	cout << "first? "; cin >> y;
	cout << "second? "; cin >> z;
	//переменна€ F формируетс€ с помощью функции make_fraction()
	fraction F = make_fraction(y, z);
	F.Show();
	system("pause");
	return 0;
}
