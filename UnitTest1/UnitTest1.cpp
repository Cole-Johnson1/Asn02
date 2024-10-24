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
			int x = 2;
			int y = 3;
			int expected = y + y + x + x;
			int actual = getPerimeter(&x, &y);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestGetArea)
		{
			int x = 2;
			int y = 3;
			int expected = x * y;
			int actual = getArea(&x, &y);
			Assert::AreEqual(expected, actual);
		}

		TEST_METHOD(TestSetlength)
		{
			int length = 1;
			int input = 3;
			
			
			int expected = input;
			int actual = setLength(input, &length);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestSetlength1)
		{
			int length = 1;
			int input = -5;
			

			int expected = input;
			int actual = setLength(input, &length);
			Assert::AreEqual(expected, actual);
		}
		TEST_METHOD(TestSetlength2)
		{
			int length = 1;
			int input = 105;
			

			int expected = input;
			int actual = setLength(input, &length);
			Assert::AreEqual(expected, actual);
		}







	};
}
