#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.4_2/lab_6.4_2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest642
{
	TEST_CLASS(UnitTest642)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[8] = { 1, 10, 2, 1, 1, 1, 1, 1 };
			int expected = sum(a, 8);

			Assert::AreEqual(expected, 18);
		}
	};
}
