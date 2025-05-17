#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;

// ������� ��� ������ �������
void printArray(int mass[], int size)
{
    for (int i = 0; i < size; ++i)
    {
        cout << mass[i] << " ";
    }
    cout << endl;
}
// ������� ��� ���������� ������� ������� �������
void insertionSort(int mass[], int size)
{
    for (int i = 1; i < size; ++i)
    {
        int key = mass[i]; // ���������� ������� �������
        int j = i - 1;

        // �������� ��������, ������� ������ key, ������
        while (j >= 0 && mass[j] > key)
        {
            mass[j + 1] = mass[j];
            j--;
        }
        // ��������� key � ���������� �������
        mass[j + 1] = key;
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

    // ���������� ������� ������� �������
    insertionSort(mass, size);

    // ����� ���������������� �������
    cout << "��������������� ������: ";
    printArray(mass, size);
    return 0;
}
