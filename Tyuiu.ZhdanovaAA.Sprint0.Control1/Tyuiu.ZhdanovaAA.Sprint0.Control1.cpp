// Tyuiu.ZhdanovaAA.Sprint0.Control1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "../Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib/Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib.cpp"
using namespace std;
int main()
{
    ISprint0Task8V0* service = new Service1();
    setlocale(LC_ALL, "Russian");
    cout << "ZhdanovaAA\nControl1" << endl;
    int a, b;
    cout << "Введите трёхзначное число: ";
    cin >> a;
    cout << "Введите цифру: ";
    cin >> b;
    cout << "Цифра есть в введённом трёхзначном числе: " << boolalpha << service->Control(a, b) << endl;

}
