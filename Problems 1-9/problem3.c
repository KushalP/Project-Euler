#include <stdio.h>

int main()
{
	unsigned long long n = 600851475143ULL;
	unsigned long long i; //Use consistent types for all of our maths

	for (i = 2ULL; i < n; i++)
	{
		/**
		 * I was originally going to implement the same recursive
		 * call as found in my Python solution, but this one is a
		 * lot simpler and does the job just as well.
		 */
		while (n % i == 0) n /= i;
	}

	printf("%llu\n", n);

	return 0;
}
