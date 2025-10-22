// GitItogovaya1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a,b;
    cout << "Введите первую сторону: ";
    cin >> a;
    cout << "Введите вторую сторону: ";
    cin >> b;
    cout << "Периметр прямоугольника: " << 2 * (a+b) << endl;
    cout << "Площадь прямоугольника: " << a * b << endl;
}

