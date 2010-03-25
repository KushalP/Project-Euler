#include <stdio.h>

static int is_palindrome(unsigned int n);

int main()
{
	unsigned int i, j, max = 0, upper_limit = 1000;

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
