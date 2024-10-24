#include "pch.h"
#include "CppUnitTest.h"


extern "C" {
#include "../BCSRec/main.h"
}


using namespace Microsoft::VisualStudio::CppUnitTestFramework;


namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestGetPerimeter)
		{
			int *x;
			int *y;
			int expected = *x + *x + *y + *y;
			int actual = getPerimeter(x, y);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestGetArea)
		{
			int *x;
			int *y;
			int expected = *x * *y;
			int actual = getArea(x, y);
			Assert::AreEqual(expected, actual);
		}
	};
}
