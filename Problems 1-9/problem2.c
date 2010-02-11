#include <stdio.h>
 
int main()
{
	unsigned int a = 1, b = 1, c = 2, sum = 0;
	
	while (c < 4000000)
	{
		c = a + b;
		sum += c * !(c % 2);
		a = b;
		b = c;
	}
	
	printf("%u\n", sum);
	
	return 0;
}