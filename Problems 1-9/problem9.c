#include <stdio.h>

unsigned int find_pythagorean_triplet(unsigned int triplet_sum);
int is_pythagorean_triplet(unsigned int a, unsigned int b, unsigned int c);

int main()
{
	unsigned int triplet_sum = 1000;

	printf("The product of the Pythagorean triplet with sum %u is %u\n", 
		triplet_sum, find_pythagorean_triplet(triplet_sum));

	return 0;
}

unsigned int find_pythagorean_triplet(unsigned int triplet_sum)
{
	
	unsigned int a, b, c, triplet_product;

	for (a = 1; a < triplet_sum+1; a++)
	{
		for (b = 1; b < triplet_sum+1; b++)
		{
			//We know our sum, so we can work out c
			c = (triplet_sum - a - b);

			if (is_pythagorean_triplet(a, b, c))
			{
				triplet_product = a * b * c;
				return triplet_product;
			}
		}
	}

}

int is_pythagorean_triplet(unsigned int a, unsigned int b, unsigned int c)
{
	return (a*a + b*b == c*c);
}
