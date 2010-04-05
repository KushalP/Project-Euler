#include <stdio.h>

static unsigned long count_factors(unsigned long n);

int main()
{
	unsigned long target = 500;

	printf("The number of prime factors of %lu is %lu\n",
		target, count_factors(target));
	
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
