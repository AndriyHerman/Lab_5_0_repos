#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_5_1/lab_5_1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:
        TEST_METHOD(TestMethod1)
        {
            double actual = k(1.0, 1.0);
            double expected = 1.381773;
            Assert::AreEqual(expected, actual, 0.00001);
        }
    };
}