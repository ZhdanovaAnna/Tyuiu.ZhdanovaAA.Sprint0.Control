#include "pch.h"
#include "CppUnitTest.h"
#include "../Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib/Tyuiu.ZhdanovaAA.Sprint0.Control1.Lib.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			ISprint0Task8V0* service = new Service1();
			int  a = 345, b = 4;
			bool n;

			n = service->Control(a, b);

			//Valid 
			Assert::AreEqual(true, n);
		}
		TEST_METHOD(TestMethod2)
		{
			ISprint0Task8V1* service = new Service2();
			float  a = 2, b = 1, c = 1, d;

			d = service->Chislo(a, b, c);

			//Valid 
			Assert::AreEqual(5.75f, d);
		}
	};

}
