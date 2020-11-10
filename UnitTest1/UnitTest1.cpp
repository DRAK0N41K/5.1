#include "pch.h"
#include "CppUnitTest.h"
#include "../5.1/5.1.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int final;
			const double a = 0;
			const double b = 0;
			final = h(a,b);
			Assert::AreEqual(final, 0);

		}
	};
}
