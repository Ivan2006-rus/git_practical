// GitItogovaya1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
//#include <cmath>
using namespace std;

const double M_PI = 3.141592653589793;

int main()
{
    setlocale(LC_ALL, "Rus");
    int r;
    cout << "Введите радиус"<<endl;
    cin >> r;
    cout << "Длина окружности: " << 2*r*M_PI <<endl;
    cout << "Площадь окружности: " << M_PI * r * r << endl;
    cout << "Объём сферы: " << 4 / 3 * M_PI * r * r * r << endl;
}

