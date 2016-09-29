#include <stdio.h>

#define MAX 4000000

int main(void)
{
	int i, j, sum;

	for (i = 1, j = 2, sum = 0; j < MAX; j += i, i = j-i)
		if (j % 2 == 0)
			sum += j;

	printf("%d\n", sum);
	return 0;
}
