#include "main.h"
/**
 * print_bin - prints binary
 * @val: argument
 * Return: integer
 */

int print_bin(va_list val)
{
	int flag = 0;
	int count = 0;
	int y;

	/**
	 * x = 1 -> int x = 1
	 */
	int x = 1;
	int z;

	unsigned int num = va_arg(val, unsigned int);
	unsigned int r;

	for (y = 0; y < 32; y++)
	{
		r = ((x << (32 - y)) & num);
		if (r >> (31 - y))
			flag = 1;
		if (flag)
		{
			/**
			 * i -> y
			 * and this z is never used at all
			 */
			z = r >> (31 - y);
			/**
			 * recheck whats this b's purpose
			 */
			_putchar(b + 48);
			count++;
		}
	}
	if (count == 0)
	{
		count++;
		_putchar('0');
	}
	return (count);
}
