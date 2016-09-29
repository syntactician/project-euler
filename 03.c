#include <math.h>
#include <stdbool.h>
#include <stdio.h>

#include "util.h"

#define PRODUCT 600851475143

int main(void)
{
	unsigned long factor, i, x;

	factor = 0;
	i = 2;
	x = PRODUCT;

	while (i <= x)
		if (x % i == 0)
		{
			if (i > factor)
				factor = i;
			x /= i;
		}
		else
			++i;

	printf("%ld\n", factor);
	return 0;
}
