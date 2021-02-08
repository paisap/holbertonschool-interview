#include "palindrome.h"

/**
* is_palindrome - Checks if is palindrome 
* @n: Number to be checked.
* Return: 1 if n is a palindrome, and 0 otherwise.
*/
int is_palindrome(unsigned long n)
{
	unsigned long copy = n, new = 0;

	while (copy)
	{
		new = new * 10 + copy % 10;
		copy /= 10;
	}
	return (n == new);
}
