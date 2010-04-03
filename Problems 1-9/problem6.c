#include <stdio.h>

static unsigned long sum_of_squares(unsigned long n);
static unsigned long square_of_sums(unsigned long n);

int main()
{
	unsigned long n = 100;

	printf("Your upper limit is: %lu\n", n);

	printf("The sum of squares is: %lu\n", sum_of_squares(n));
	printf("The square of sums is: %lu\n", square_of_sums(n));

	printf("The difference between the above is: %lu\n", 
		square_of_sums(n) - sum_of_squares(n));

	return 0;
}

unsigned long sum_of_squares(unsigned long n)
{
	unsigned long i, sum = 0;

	for (i = 0; i <= n; i++)
	{
		sum += (i * i);
	}

	return sum;
}

unsigned long square_of_sums(unsigned long n)
{
	unsigned long i, square = 0;

	for (i = 0; i <= n; i++)
	{
		square += i;
	}

	return (square * square);
}
