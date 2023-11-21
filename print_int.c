#include "main.h"

/**
 * print_int - prints the integer
 * @n: number of integers printed
 * Return: Number of characters printed.
 */
int print_int(int n)
{
	int count = 0;

	if (n < 0)
	{
		count += _putchar('-');
		n = -n;
	}
	if (n / 10)
	{
		count += print_int(n / 10);
	}
	count += _putchar((n % 10) + '0');
	return (count);
}
