#include <stdio.h>

#define MAX 1000

int main(void)
{
	int i, sum;

	for (i = 1, sum = 0; i < MAX; ++i)
		if (i % 3 == 0 || i % 5 == 0)
			sum += i;

	printf("%d\n", sum);
	return 0;
}
