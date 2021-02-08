#include "palindrome.h"

/**
* is_palindrome - Checks whether or not a given unsigned integer is a
*		  palindrome.
* @n: Number to be checked.
* Return: 1 if n is a palindrome, and 0 otherwise.
*/
int is_palindrome(unsigned long n)
{
	unsigned long y = 1, aux = 0, first = n, second = 0, x = 10, prev = 0, z = 0;

	while (y < n)
		y = y * 10, aux++;
	if (aux == 0)
		return (1);
	if (n % 10 == n / 10)
		return (1);
	y = y / 10;
	while (z < (aux / 2))
	{
		first = n / y;
		if (z != 0)
			first = first % 10;
		if (x == 10)
			second = n % x;
		else
		{
			second = n % x;
			prev = x / 10;
			second = second / prev;
		}
		x = x * 10, z++, y = y / 10;
		if (first != second)
			return (0);
	}
	return (1);
}
