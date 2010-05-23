#include <stdio.h>

unsigned int factorial(unsigned int n);
unsigned int get_combination(unsigned int n, unsigned int k);

int main()
{
	unsigned int side_length = 20, choose_side = 40;

	printf("%u paths when side length is %u", get_combination(choose_side, side_length), side_length);

	return 0;
}

unsigned int factorial(unsigned int n)
{
	unsigned int product = 1, i;

	for (i = n; i > 0; i--)
		product *= i;
	
	return product;
}

unsigned int get_combination(unsigned int n, unsigned int k)
{
	unsigned int x, y, z;

	x = factorial(n);
	y = factorial(k);
	z = factorial(n - k);

	return x / (y * z);
}
