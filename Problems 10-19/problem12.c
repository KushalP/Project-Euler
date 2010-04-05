#include <stdio.h>

static unsigned long count_factors(unsigned long n);

int main()
{
	unsigned long target = 500, i = 1, n = 1;

	while (count_factors(n) < target)
	{
		//Incrementing before increases the speed ten-fold!
		n += ++i;
		
		printf("Trying %lu...\n", n);
	}

	printf("The first triangle number with at least %lu divisors is %lu\n",
		target, n);
	
	return 0;
}

unsigned long count_factors(unsigned long n)
{
	unsigned long result = 1, i, count;

	for (i = 2; i <= n; i++)
	{
		count = 0;

		while (n % i == 0)
		{
			count++;
			n /= i;
		}

		result *= count + 1;
	}

	return result;
}
