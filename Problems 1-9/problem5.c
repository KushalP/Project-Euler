#include <stdio.h>

static unsigned long greatest_common_divisor(unsigned long x, unsigned long y);
static unsigned long lowest_common_multiple(unsigned long x, unsigned long y);

int main()
{
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
}
