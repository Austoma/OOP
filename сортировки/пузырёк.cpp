#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;
// ������� ��� ���������� ������� ������� ��������

// ������� ��� ������ �������
void printArray(int mass[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
void bubbleSort(int mass[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        for (int j = 0; j < size - i - 1; ++j)
        {
            // ���� ������� ������� ������ ����������, ������ �� �������
            if (mass[j] > mass[j + 1])
            {
                swap(mass[j], mass[j + 1]);
            }
        }
        printArray(mass,size);
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int size;
    // ���� ������� �������
    cout << "������� ������ �������: ";
    cin >> size;

    int mass[size];

    // ���� ��������� �������
    for (int i = 0; i < size; ++i)
    {
        mass[i] = rand() % 100;
    }
    // ����� ��������� �������
    cout << "�������� ������: ";
    printArray(mass, size);

    // ���������� ������� ������� ��������
    bubbleSort(mass, size);

    // ����� ���������������� �������
    cout << "��������������� ������: ";
    printArray(mass, size);

    return 0;
}
