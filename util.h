#include <stdbool.h>

bool is_prime(int x);
// bool is_palindrome(char *str);
int reverse_int(int x);
bool is_palindrome_int(int x);
unsigned long gcd(unsigned long x, unsigned long y);
unsigned long lcm(unsigned long x, unsigned long y);

bool is_prime(int x)
{
	int i;

	if (x <= 1)
		return false;
	else if (x <= 3)
		return true;
	else if (x % 2 == 0 || x % 3 == 0)
		return false;
	for (i = 5; i*i <= x; i += 6)
		if (x % i == 0 || x % (i + 2) == 0)
			return false;
	return true;
}

/*
 * bool is_palindrome(char *str)
 * {
 * 	int i, len;
 * 
 * 	len = strlen(str) - 1;
 * 
 * 	for (i = 0; i < len; ++i, --len)
 * 		if (str[i] != str[len])
 * 			return false;
 * 	return true;
 * }
 */

int reverse_int(int x)
{
	int rev;
	short digit;

	rev = 0;

	while (x)
	{
		digit = x % 10;
		rev = rev * 10 + digit;
		x /= 10;
	}

	return rev;
}

bool is_palindrome_int(int x)
{
	return x == reverse_int(x);
}

unsigned long gcd(unsigned long x, unsigned long y)
{
	unsigned long i;

	if (x > y)
	{
		i = x;
		x = y;
		y = i;
	}

	/* recursive, but still fast */
	if (x == 0)
		return y;
	else
		return gcd(y % x, x);
}

/* will break for pretty low values if not at least long */
unsigned long lcm(unsigned long x, unsigned long y)
{
	return (x * y) / gcd(x, y);
}
