#include <iostream>
#include <clocale>
#include <stdlib.h>
using namespace std;
const int M = 100; // ������������ ������ �������
// ������� ��� ���������� ���������� ������� �� ������ ������
void sort(int mat[M][M], int str, int cols)
{
    // ����������� ���������� ��� ������������ ��������
    for (int i = 0; i < cols - 1; ++i)
    {
        for (int j = 0; j < cols - i - 1; ++j)
        {
            // ���������� �������� �� ������ ������
            if (mat[1][j] > mat[1][j + 1])
            {
                // ������ ������� �������
                for (int k = 0; k < str; ++k)
                {
                    swap(mat[k][j], mat[k][j + 1]);
                }
            }
        }
    }
}
// ������� ��� ������ ���������� �������
void printMatrix(int mat[M][M], int str, int cols)
{
    for (int i = 0; i < str; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    setlocale(LC_ALL, "Russian");
    int mat[M][M];
    int str, cols;

    // ���� �������� �������
    cout << "������� ���������� ����� � �������� �������: ";
    cin >> str >> cols;

    // ���� ��������� �������
    for (int i = 0; i < str; ++i)
    {
        for (int j = 0; j < cols; ++j)
        {
            mat[i][j] = rand() % 100;
        }
    }
    cout << "�������� ������:" << endl;
    printMatrix(mat, str, cols);
    // ���������� �� ������ ������
    sort(mat, str, cols);
    // ����� ���������������� �������
    cout << "��������������� ������ �� ������ ������:" << endl;
    printMatrix(mat, str, cols);

    return 0;
}
