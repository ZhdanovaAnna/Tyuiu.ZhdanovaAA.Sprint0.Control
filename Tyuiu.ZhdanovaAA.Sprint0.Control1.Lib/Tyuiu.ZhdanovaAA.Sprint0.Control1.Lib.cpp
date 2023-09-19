// Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib.cpp : Defines the functions for the static library.
//

#include "pch.h"
#include "framework.h"
#include <math.h>"
#include "../../Tyuiu.CoursControl_0/Tyuiu.CoursControl_0.cpp"
// TODO: This is an example of a library function
class Service1 :public ISprint0Task8V0
{
	//Inherited via ISprint0Task8V0
	virtual bool Control(int a, int b) override
	{
		int num_1 = a / 100 % 10, num_2 = a / 10 % 10, num_3 = a % 10;
		bool n = (num_1 == b) || (num_2 == b) || (num_3 == b);
		return n;
	}
};
class Service2 :public ISprint0Task8V1
{
	//Inherited via ISprint0Task8V0
	virtual float Chislo(float a, float b, float c) override
	{
		return 5 + (2 * a - c) / (3 + pow(b, 2));
	}
};