#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <stdint.h>

uint32_t nth_term_length(uint32_t n);

int main()
{
	uint32_t max_num = 0, max_len = 0, curr_len, i;
	
	for (i = 1; i < 1000000; i++)
	{
		curr_len = nth_term_length(i);
		
		if (curr_len > max_len)
		{
			max_len = curr_len;
			max_num = i;
		}
	}

	printf("Answer: %u (len %u)\n", max_num, max_len);

	return EXIT_SUCCESS;
}


uint32_t nth_term_length(uint32_t n) {
	uint32_t count = 0, num;
	
	for (num = n; num != 1; count++)
	{
		if ((num & 1) == 0)
			num /= 2;
		else
			num = (3 * num) + 1;
	}
	
	return count + 1;
}
