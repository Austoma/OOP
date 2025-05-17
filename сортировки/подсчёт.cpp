#include <iostream>
#include <clocale>
#include <string>
using namespace std;

// ������� ��� ������ �������
void printArray(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << "\t";
    }
    cout << endl;
}

// ������� ���������� ���������
void CountingSort(int* a, int* c, int n, int k)
{
    // �������� ������ c
    for (int i = 0; i < k; i++)
    {
        c[i] = 0;
    }
    cout << "������ c ����� ���������:\n";
    printArray(c, k);

    // ������������ ������� ������� ��������
    for (int i = 0; i < n; i++)
    {
        c[a[i]] = c[a[i]] + 1;
    }
    cout << "������ c ����� �������� ������:\n";
    printArray(c, k);

    // ��������������� ��������������� ������
    int i = 0;
    for (int j = 0; j < k; j++)
    {
        while (c[j] != 0)
        {
            a[i] = j;
            c[j]--;
            i++;
            cout << "������ a ����� ���������:\n";
            printArray(a, n);
        }
    }
}

int main()
{
    setlocale(LC_ALL, "Russian");
    int n;
    cout << "������� ���������� ��������� � �������: ";
    cin >> n;
    int* a = new int[n];
    int k;
    cout << "�������� �� �, ������� �:\n";
    cin >> k;
    int* c = new int[k];

    // ���� ��������� �������
    cout << "������� �������� �������:\n";
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // ����� ��������� �������
    cout << "�������� ������:\n";
    printArray(a, n);

    // ���������� �������
    CountingSort(a, c, n, k);

    // ����� ���������������� �������
    cout << "��������������� ������:\n";
    printArray(a, n);

    // ������������ ������
    delete[] a;
    delete[] c;

    system("pause");
    return 0;
}
