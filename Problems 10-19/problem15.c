#include <stdio.h>
#include <stdlib.h>
#include <gmp.h>

int main()
{
	char* result_str;
	unsigned int n = 40, k = 20;
	mpz_t result;

	mpz_init(result);

	mpz_bin_uiui(result, n, k),

	result_str = mpz_get_str(NULL, 10, result);

	printf("%s paths when side length is %u\n", 
		result_str,
		k);

	free(result_str);
	mpz_clear(result);

	return 0;
}
