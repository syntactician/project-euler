#include <stdio.h>
#include <stdlib.h>

#define SUM 1000

// naive, brute-force
int main(void)
{
	int a, b, c;

	for (a = 1; a < SUM; ++a)
		for (b = 1; b < SUM; ++b)
		{
			c = SUM - a - b;
			if ((a * a + b * b == c * c) && (a + b + c == 1000))
			{
				printf("%d\n", a * b * c);
				exit(0);
			}
		}

}
