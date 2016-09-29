#include <stdio.h>

#include "util.h"

#define MAX 2000000

int main(void)
{
	int i;
	unsigned long sum;

	for (i = 1, sum = 0; i <= MAX; ++i)
		if (is_prime(i))
			sum += i;

	printf("%lu\n", sum);
	return 0;
}
