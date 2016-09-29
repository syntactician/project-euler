#include <stdio.h>
#include <stdlib.h>

#define MAX 100

int main(void)
{
	int i;
	unsigned long sum, sum_squares;

	for (i = 1, sum = 0, sum_squares = 0; i <= MAX; ++i)
	{
		sum += i;
		sum_squares += i * i;
	}

	printf("%lu\n", sum * sum - sum_squares);
	return 0;
}
