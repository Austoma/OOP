#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

void printArray(int mass[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
// ������� ��� ���������� ������� ������� ������
void selectionSort(int mass[], int size)
{
    for (int i = 0; i < size - 1; ++i)
    {
        // ������� ������ ������������ �������� � ���������� ����� �������
        int minIndex = i;
        for (int j = i + 1; j < size; ++j)
        {
            if (mass[j] < mass[minIndex])
            {
                minIndex = j;
            }
        }
        // ������ ������� ������� ������� � �����������
        swap(mass[i], mass[minIndex]);
        printArray(mass,size);
    }
}
// ������� ��� ������ �������


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

    cout << "�������� ������: ";
    printArray(mass, size);

    selectionSort(mass, size); // ���������� ������� ������� ������

    cout << "��������������� ������: "; // ����� ���������������� �������
    printArray(mass, size);

    return 0;
}
