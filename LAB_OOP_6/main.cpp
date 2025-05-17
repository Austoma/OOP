#include "List.h"
#include <iostream>
#include <clocale>
using namespace std;

int main() {
    setlocale(LC_ALL, "rus");
    // Тестирование конструкторов и добавления элементов
    List list1;
    cout << "Создание пустого списка list1:" << endl;
    list1.show_list(); // Должно вывести "Список пуст!"

    cout << "\nДобавление элементов в list1 (1, 2, 3):" << endl;
    list1.push_back(1);
    list1.push_back(2);
    list1.push_back(3);
    list1.show_list(); // 1 2 3

    // Тестирование копирующего конструктора
    List list2(list1);
    cout << "\nСоздание list2 как копии list1:" << endl;
    list2.show_list(); // 1 2 3

    // Тестирование оператора присваивания
    List list3;
    list3 = list1;
    cout << "\nПрисвоение list3 = list1:" << endl;
    list3.show_list(); // 1 2 3

    // Тестирование добавления/удаления элементов
    cout << "\nДобавление 0 в начало list1:" << endl;
    list1.push_front(0);
    list1.show_list(); // 0 1 2 3

    cout << "\nУдаление первого элемента list1:" << endl;
    list1.pop_front();
    list1.show_list(); // 1 2 3

    cout << "\nДобавление 4 в конец list1:" << endl;
    list1.push_back(4);
    list1.show_list(); // 1 2 3 4

    cout << "\nУдаление последнего элемента list1:" << endl;
    list1.pop_back();
    list1.show_list(); // 1 2 3

    // Тестирование вставки/удаления по позиции
    cout << "\nВставка 10 после 2-го элемента list1:" << endl;
    list1.add_after(2, 10);
    list1.show_list(); // 1 2 10 3

    cout << "\nУдаление 3-го элемента list1:" << endl;
    list1.pop_element(3);
    list1.show_list(); // 1 2 3

    // Тестирование оператора []
    cout << "\nДоступ к элементам через operator[]:" << endl;
    cout << "list1[0] = " << list1[0] << endl; // 1
    cout << "list1[1] = " << list1[1] << endl; // 2
    cout << "list1[2] = " << list1[2] << endl; // 3

    // Тестирование оператора *
    List list4;
    list4.push_back(2);
    list4.push_back(3);
    list4.push_back(4);

    // Тестирование размера списка
    cout << "\nРазмер list1: " << list1() << endl; // 3

    return 0;
}
