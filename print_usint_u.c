#include "main.h"
#include <string.h>

/**
 * print_us_u - function to get an unsigned integer
 * @args: variable arguments
 * Return: return number of characters printed
 */
int print_us_u(va_list args)
{
	unsigned int unsigned_int = va_arg(args, unsigned int);

	int num, last_number = unsigned_int % 10, digit, exponent = 1;
	int iterator = 1;

	unsigned_int /= 10;
	num = unsigned_int;

	if (last_number < 0)
	{
		unsigned_int = -unsigned_int;
		num = -num;
		last_number = -last_number;
		iterator++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exponent *= 10;
			num /= 10;
		}
		num = unsigned_int;

		while (exponent > 0)
		{
			digit  = num / exponent;
			write(digit + '0');
			num = num - (digit * exponent);
			exponent /= 10;
			iterator++;
		}
	}
	write(last_number + '0');
	return (iterator);

