#include <stdio.h>

static unsigned long greatest_common_divisor(unsigned long x, unsigned long y);
static unsigned long lowest_common_multiple(unsigned long x, unsigned long y);

int main()
{
	unsigned long i, result = 1, upper_limit = 20;

	for (i = 1; i < (upper_limit + 1); i++)
	{
		result = lowest_common_multiple(result, i);
	}

	printf("The smallest number evenly divisible by all numbers from 1 to %lu is %lu\n", upper_limit, result);

	return 0;
}

unsigned long greatest_common_divisor(unsigned long x, unsigned long y)
{
	unsigned long temp_var;
	while (y)
	{
		temp_var = x;
		x = y;
		y = temp_var % y;
	}

	return x;
}

unsigned long lowest_common_multiple(unsigned long x, unsigned long y)
{
	return (x * y) / greatest_common_divisor(x, y);
}
