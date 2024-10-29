#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_8.1str/Lab_8.1str.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			string testStr = "This is a test, - string";
			Assert::AreEqual(1, Count(testStr));
		}
	};
}
