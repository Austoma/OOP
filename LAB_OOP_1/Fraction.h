#ifndef FRACTION_H
#define FRACTION_H

#pragma once
#include <iostream>
#include <cmath>
using namespace std;
struct fraction
{
	double first;
	int second;
	void Init(double, int);//метод для инициализации полей
	void Read();//метод для чтения значений полей
	void Show();//метод для вывода значений полей
	double Element(int j );//вычисление j-го элемента прогрессии.
};


#endif // FRACTION_H
