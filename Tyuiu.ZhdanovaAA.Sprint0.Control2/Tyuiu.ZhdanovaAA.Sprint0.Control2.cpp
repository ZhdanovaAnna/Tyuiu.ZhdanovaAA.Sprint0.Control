// Tyuiu.ZhdanovaAA.Sprint0.Control2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib/Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task8V1* service = new Service2();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\nControl2" << endl;
    int a, b, c;
    cout << "������� ������ ����� X: ";
    cin >> a;
    cout << "������� ������ ����� Y: ";
    cin >> b;
    cout << "������� ������ ����� Z: ";
    cin >> c;
    cout << "�������� ���������: 5 + (2 * X - Z) / (3 + Y^2) = " << service->Chislo(a, b, c) << endl;

}