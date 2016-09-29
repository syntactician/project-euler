// TODO: consider moving gcd and lcm to util.h

#include <stdio.h>

#include "util.h"

#define MAX 20

int main(void)
{
	unsigned long i, j;

	for (i = 2, j = 3; j <= MAX; i = lcm(i, j), ++j)
		continue;

	printf("%lu\n", i);
	return 0;
}
