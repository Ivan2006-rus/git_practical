// GitItogovaya1.cpp : ���� ���� �������� ������� "main". ����� ���������� � ������������� ���������� ���������.
//

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Rus");
    int a,b;
    cout << "������� ������ �������: ";
    cin >> a;
    cout << "������� ������ �������: ";
    cin >> b;
    cout << "�������� ��������������: " << 2 * (a+b) << endl;
    cout << "������� ��������������: " << a * b << endl;
}

