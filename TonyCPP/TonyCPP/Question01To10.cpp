#include "stdafx.h"
#include "Question01To10.h"

typedef unsigned long ULONG;

Question01To10::Question01To10()
{
}


Question01To10::~Question01To10()
{
}

/********************* start of question 01 ****************************/
void Question01To10::Question01()
{
	ULONG sum = 0;
	ULONG index = 0;

	for (index = 1; index < 10; index++)
	{
		if (index % 3 == 0)
			sum += index;
		if (index % 5 == 0)
			sum += index;
		if (index % 15 == 0)
			sum -= index;
	}

	printf("The result is %u\n", sum);
}

/********************* start of question 02 ****************************/
static ULONG fibo(int index)
{
	if (index == 0)
		return 1;
	if (index == 1)
		return 2;

	return fibo(index - 1) + fibo(index - 2);
}
void Question01To10::Question02()
{
	ULONG value = 0;
	ULONG sum = 0;
	int index = 0;

	while (1)
	{
		value = fibo(index++);
//		printf("value %u for %d\n", value, index - 1);

		if (value >= 4000000)
			break;

		if (value % 2 == 0)
			sum += value;
	}

	printf("result is %u\n", sum);
}

/********************* start of question 03 ****************************/
static ULONG get_factor(ULONG value)
{
	ULONG result = 1;
	ULONG index = 0;

	for (index = 2; index <= value / 2; index++)
	{
		if (value % index == 0)
		{
			result = index;
			break;
		}
	}

	return result;
}

static ULONG calc(ULONG value)
{
	ULONG factor = 0;

	if ((factor = get_factor(value)) == 1)
	{
		printf("%d\n", value);
		return value;
	}

	value /= factor;
	return calc(value);
}
void Question01To10::Question03()
{
	calc(600851475143);
}
