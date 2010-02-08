#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

int main()
{
	uint32_t sum = 0;
	int i;
	
	for (i = 3; i < 1000; i++)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;
	
	printf("Answer: %u\n", sum);
	return 0; //Got to exit cleanly!
}