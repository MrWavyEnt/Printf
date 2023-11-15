#include "main.h"

/**
 * print_hex_1 - a function that prints larger bit ints
 * @n: parameter for int passed to function
 * Return: count
 */

int print_hex_1(unsigned int n)
{
	int val = 0;

	if (n / 10)
	{
		val += prt_long_int(n / 10);
	}
	val += _putchar((n % 10) + '0');

	return (val);
}

/**
 * print_hex_2 - prints an unsigned int based of its base
 * @n: unsigned int
 * @base: specified base
 * @cap: hexadecimal conversion to print in uppercase or lower case
 * Return: number of characters printed
 */

int print_hex_2(unsigned int n, int base, int cap)
{
	int val = 0;
	char digit;

	if (n / base)
	{
		val += prt_base_number(n / base, base, cap);
	}
	digit = n % base;
	if (digit > 9)
	{
		val += _putchar((cap ? 'A' : 'a') + digit - 10);
	}
	else
	{
		val += _putchar('0' + digit);
	}
	return (val);
}


/**
 * print_hex_3- a function that prints an int with base 16
 * @n: parameter to be passed to function
 * @cap: if character is uppercase or lowercase
 * Return: count
 */

int print_hex_3(unsigned int n, int cap)
{
	return (prt_base_number(n, 16, cap));
}

/**
 * print_oct - a funtion that prints an in with base 8
 * @n: parameter to be passed to function
 * Return: count
 */

int print_oct(unsigned int n)
{
	return (prt_base_number(n, 8, 0));
}

/**
 * print_bin - a function that prints a binary number
 * @num: parameter for function to be passed
 * Return: void
 */

int print_bin(unsigned int n)
{
	return (prt_base_number(num, 2, 0));
}
