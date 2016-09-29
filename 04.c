#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "util.h"

#define MAX 999
#define MIN 100

int main(void)
{
	int i, j, k, x;

	x = 0;
	
	for (i = MAX; i >= MIN; --i)
	{
		for (j = MAX; j >= MIN; --j)
		{
			k = i * j;

			if (k < x)
				break;
			if (is_palindrome_int(k) && k > x)
				x = k;
		}
	}

	printf("%d\n", x);
	return 0;
}
