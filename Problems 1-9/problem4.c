#include <stdio.h>

static int is_palindrome(unsigned int n);

int main()
{
	unsigned int i, j, max_palindrome = 0, upper_limit = 1000;

	for (i = 100; i < upper_limit; i++)
	{
		for (j = 100; j < upper_limit; j++)
		{
			unsigned int passing_val = i * j;

			if (is_palindrome(passing_val) 
				&& passing_val > max_palindrome)
			{
				max_palindrome = passing_val;
			}
		}
	}

	printf("The largest palindrome product of numbers under %u is %u\n", 
		upper_limit, max_palindrome);

	return 0;
}

int is_palindrome(unsigned int n)
{
	unsigned int reverse = 0, tester = n;

	while (tester)
	{
		//shift digits left and grab the rightmost digit
		reverse = 10 * reverse + (tester % 10);

		//shift digits right
		tester /= 10;
	}

	//Return a simple boolean
	return reverse == n;
}
