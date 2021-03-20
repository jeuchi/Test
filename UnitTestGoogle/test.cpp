#include "pch.h"

#include "../App/main.cpp"

TEST(SumTest, HandlesOutOfRange)
{
	uint8_t usOperand1 = 10;
	uint8_t usOperand2 = 12;
	uint8_t usExpected = usOperand1 + usOperand2;

	EXPECT_EQ(usExpected, sumValues(usOperand1, usOperand2));
}

