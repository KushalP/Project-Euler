#include <stdio.h>
#include <stdlib.h> 

unsigned int sieve_of_eratosthenes(unsigned int n);

int main()
{
	int n = 10001;

	printf("The 10001st prime number is: %u\n", sieve_of_eratosthenes(n));

	return 0;
}

unsigned int sieve_of_eratosthenes(unsigned int n)
{
	char *sieve;
	unsigned int i, result = 0, upper_limit = 1000000;
	unsigned count = 0;
	
	sieve = calloc(n, sizeof *sieve); //Initialises to zero

	for (i = 2; i < upper_limit; i++)
	{
		if (!sieve[i])
		{
			unsigned int j;

			count++;

			if (count == n)
			{
				result = i;
				break; //We've found our value, so exit the loop
			}

			for (j = i*2; j < upper_limit; j += i)
			{
				sieve[j] = 1;
			}
		}
	}

	free(sieve); //Clear up our memory

	return result;
}
