#include <iostream>
#include <cstdlib>
#include <clocale>
using namespace std;

// ������� ��� ������ �������
void printArray(int* a, int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

// ������� ���������� ��������
void merge(int* a, int n)
{
    int mid = n / 2;
    if (n % 2 == 1)
        mid++;
    int h = 1;
    int* c = (int*)malloc(n * sizeof(int));
    if (c == nullptr) {
        cerr << "������ ��������� ������\n";
        return;
    }
    int step;

    cout << "������ ���������� ��������:\n";
    printArray(a, n);

    while (h < n)
    {
        step = h;
        int i = 0;
        int j = mid;
        int k = 0;

        cout << "��� ������� � h = " << h << ":\n";

        while (step <= mid)
        {
            while ((i < step) && (j < n) && (j < (mid + step)))
            {
                if (a[i] < a[j])
                {
                    c[k] = a[i];
                    i++;
                    k++;
                }
                else
                {
                    c[k] = a[j];
                    j++;
                    k++;
                }
            }
            while (i < step)
            {
                c[k] = a[i];
                i++;
                k++;
            }
            while ((j < (mid + step)) && (j < n))
            {
                c[k] = a[j];
                j++;
                k++;
            }
            step = step + h;
        }

        // �������� ��������� ������ c ������� � a
        for (i = 0; i < n; i++)
        {
            a[i] = c[i];
        }

        cout << "������ ����� ���� �������:\n";
        printArray(a, n);

        h = h * 2;
    }

    free(c); // ����������� ������
}

int main()
{
    setlocale(LC_ALL, "rus");
    int a[8];
    for (int i = 0; i < 8; i++)
    {
        a[i] = rand() % 20 - 10;
    }

    cout << "�������� ������:\n";
    printArray(a, 8);

    merge(a, 8);

    cout << "��������������� ������:\n";
    printArray(a, 8);

    return 0;
}
