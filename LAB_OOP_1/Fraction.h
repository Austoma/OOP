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
	void Init(double, int);//����� ��� ������������� �����
	void Read();//����� ��� ������ �������� �����
	void Show();//����� ��� ������ �������� �����
	double Element(int j );//���������� j-�� �������� ����������.
};


#endif // FRACTION_H
