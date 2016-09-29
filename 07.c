#include <stdbool.h>
#include <stdio.h>

#include "util.h"

int main(void)
{
	unsigned long i, x;

	for (x = 2, i = 1; i <= 10001; ++x)
		if (is_prime(x))
			++i;

	printf("%lu\n", x - 1);
	return 0;
}
