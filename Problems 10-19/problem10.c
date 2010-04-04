#include <stdio.h>
#include <stdlib.h> 

unsigned long sum_sieve_of_eratosthenes(unsigned long n);

int main()
{
	unsigned long n = 2000000;

	printf("The sum of all primes less than %lu is: %lu\n", 
		n, sum_sieve_of_eratosthenes(n));

	return 0;
}

/**
 * Slight modification to the sieve to sum all primes rather
 * than returning the first value which meets our upper limit
 */
unsigned long sum_sieve_of_eratosthenes(unsigned long n)
{
	char *sieve;
	unsigned long i, result = 0, upper_limit = 1000000;

	sieve = calloc(n, sizeof *sieve); //Initialises to zero

	for (i = 2; i < upper_limit; i++)
	{
		if (!sieve[i])
		{
			unsigned long j;
			result += i;

			for (j = i*2; j < upper_limit; j += i)
			{
				sieve[j] = 1;
			}
		}
	}

	free(sieve); //Clear up our memory

	return result;
}
