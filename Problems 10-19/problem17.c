#include <stdio.h>

int main()
{
	unsigned digits[] = { 0, 3, 3, 5, 4, 4, 3, 5, 5, 4 };
	unsigned unique_numbers[] = { 3, 6, 6, 8, 8, 7, 7, 9, 8, 8 };
	unsigned tens_modifiers[] = { 0, 0, 6, 6, 5, 5, 5, 7, 6, 6 };

	unsigned hundred = 7;
	unsigned and = 3;
	unsigned thousand = 8;

	unsigned i, j;
	unsigned sum = 0;

	/* from 1 to 9 */
	for (i = 1; i < 10; i++)
		sum += digits[i];

	/* from 10 to 19 */
	for (i = 0; i < 10; i++)
		sum += unique_numbers[i];
	
	/* from 20 to 99 */
	for (i = 20; i < 100; i++)
		sum += tens_modifiers[i / 10] + digits[i % 10];
	
	/* from 100 to 999 */
	for (i = 1; i < 10; i++)
	{
		/* just i hundred */
		sum += digits[i] + hundred;

		/* from i hundred and one to i hundred and nine */
		for (j = 1; j < 10; j++)
			sum += digits[i] + hundred + and + digits[j];
		
		/* from i hundred and ten to i hundred and nineteen */
		for (j = 0; j < 10; j++)
			sum += digits[i] + hundred + and + unique_numbers[j];

		/* from i hundred and twenty to i hundred and ninety-nine */
		for (j = 20; j < 100; j++)
			sum += digits[i] + hundred + and + tens_modifiers[j/10] + digits[j%10];
	}

	/* just 1000 */
	sum += digits[1] + thousand;

	printf("If you wrote the numbers from 1 to 1000 and counted the letters, it would equal: %u\n", 
		sum);

	return 0;
}
