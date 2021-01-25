#include "pch.h"
#include "CppUnitTest.h"
#include <Windows.h>
#include "../parket/func.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace parketTest1
{
	TEST_CLASS(parketTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int length = 2000;
			int width = 3000;
			int boardLength = 100;
			int boardWidth = 25;
			double quantityByLengthT = 20;
			double quantityByWidthT = 120;
			double restLengthT = 0;
			double restWidthT = 0;
			double totalT = 2400;
			returnValueG(length, width, boardLength, boardWidth);
			resultValue res = returnValueG(length, width, boardLength, boardWidth);
			double quantityByLength = res.quantityByLength;
			double quantityByWidth = res.quantityByWidth;
			double restLength = res.restLength;
			double restWidth = res.restWidth;
			double total = res.total;
			Assert::AreEqual(quantityByLengthT, quantityByLength);
			Assert::AreEqual(quantityByWidthT, quantityByWidth);
			Assert::AreEqual(restLengthT, restLength);
			Assert::AreEqual(restWidthT, restWidthT);
			Assert::AreEqual(totalT, totalT);
		}
	};
};
namespace parketTest2
{
	TEST_CLASS(parketTest2)
	{
	public:

		TEST_METHOD(TestMethod2)
		{
			int length = 2000;
			int width = 3000;
			int boardLength = 100;
			int boardWidth = 25;
			double quantityByLengthT = 80;
			double quantityByWidthT = 30;
			double restLengthT = 0;
			double restWidthT = 0;
			double totalT = 2400;
			returnValueW(length, width, boardLength, boardWidth);
			resultValue res = returnValueW(length, width, boardLength, boardWidth);
			double quantityByLength = res.quantityByLength;
			double quantityByWidth = res.quantityByWidth;
			double restLength = res.restLength;
			double restWidth = res.restWidth;
			double total = res.total;
			Assert::AreEqual(quantityByLengthT, quantityByLength);
			Assert::AreEqual(quantityByWidthT, quantityByWidth);
			Assert::AreEqual(restLengthT, restLength);
			Assert::AreEqual(restWidthT, restWidthT);
			Assert::AreEqual(totalT, totalT);
		}
	};
}
