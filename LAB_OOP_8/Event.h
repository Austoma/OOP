#ifndef EVENT_H
#define EVENT_H
#pragma once

const int evNothing = 0;//������ �������
const int evMessage=100;//�������� �������
const int cmAdd=1;//�������� ������ � ������
const int cmDel=2;//������� ������ �� ������
const int cmGet = 3;//������� ������� ���� ��������
const int cmShow=4;//������� ��� ������
const int cmMake = 6;//������� ������
const int cmQuit=101;//�����

struct TEvent
{
	int what;//��� �������
	int command;//��� �������
	int message;
	int a;//�������� �������
};

#endif // EVENT_H
