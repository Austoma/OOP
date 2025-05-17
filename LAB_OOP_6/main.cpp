#include "List.h"
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // ������������ ������������� � ���������� ���������
    List list1;
    cout << "�������� ������� ������ list1:" << endl;
    list1.show_list(); // ������ ������� "������ ����!"

    cout << "\n���������� ��������� � list1 (1, 2, 3):" << endl;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.show_list(); // 1 2 3

    // ������������ ����������� ������������
    List list2(list1);
    cout << "\n�������� list2 ��� ����� list1:" << endl;
    list2.show_list(); // 1 2 3

    // ������������ ��������� ������������
    List list3;
    list3 = list1;
    cout << "\n���������� list3 = list1:" << endl;
    list3.show_list(); // 1 2 3

    // ������������ ����������/�������� ���������
    cout << "\n���������� 0 � ������ list1:" << endl;
    list1.push_front(0);
    list1.show_list(); // 0 1 2 3

    cout << "\n�������� ������� �������� list1:" << endl;
    list1.pop_front();
    list1.show_list(); // 1 2 3

    cout << "\n���������� 4 � ����� list1:" << endl;
    list1.push_back(4);
    list1.show_list(); // 1 2 3 4

    cout << "\n�������� ���������� �������� list1:" << endl;
    list1.pop_back();
    list1.show_list(); // 1 2 3

    // ������������ �������/�������� �� �������
    cout << "\n������� 10 ����� 2-�� �������� list1:" << endl;
    list1.add_after(2, 10);
    list1.show_list(); // 1 2 10 3

    cout << "\n�������� 3-�� �������� list1:" << endl;
    list1.pop_element(3);
    list1.show_list(); // 1 2 3

    // ������������ ��������� []
    cout << "\n������ � ��������� ����� operator[]:" << endl;
    cout << "list1[0] = " << list1[0] << endl; // 1
    cout << "list1[1] = " << list1[1] << endl; // 2
    cout << "list1[2] = " << list1[2] << endl; // 3

    // ������������ ��������� *
    List list4;
    list4.push_back(2);
    list4.push_back(3);
    list4.push_back(4);

    // ������������ ������� ������
    cout << "\n������ list1: " << list1() << endl; // 3

    return 0;
}
