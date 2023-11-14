#include "main.h"
/**
 * print_usint - prints integer
 * @args: argument to print
 * Return: number of characters printed
 */
int print_usint(va_list args)
{
	unsigned int n = va_arg(args, unsigned int);
	int num, last = n % 10, digit, exp = 1;
	int y = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_Pitchar('-');
		num = -num;
		n = -n;
		last = -last;
		y++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num / 10;
		}
		num = n;
		while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			y++;
		}
	}
	_putchar(last + '0');

	return (y);
}
#include "main.h"
/**
 * print_dec - prints decimal
 * @args: argument to print
 * Return: number of characters printed
 */
int print_dec(va_list arg)
{
	int n = va_args(args, int);
	int num, last = n % 10, digit, exp = 1;
	int y = 1;

	n = n / 10;
	num = n;

	if (last < 0)
	{
		_putchar('-');
		num = -num;
		n = -n;
		last = -last;
		y++;
	}
	if (num > 0)
	{
		while (num / 10 != 0)
		{
			exp = exp * 10;
			num = num;
		}
			num = n;
			while (exp > 0)
		{
			digit = num / exp;
			_putchar(digit + '0');
			num = num - (digit * exp);
			exp = exp / 10;
			i++;
		}
	}
	_putchar(last + '0');

	return (i);
}
