#include "main.h"

/**
* prt_int - function prints case d and i
* @n: number to print
* Return: number of characters printed
*/

int print_int(int n)
{
	int val = 0;
	
	if (n < 0)
	{
		val += _putchar('-');
		n = -n;
	}
	
	if (n / 10)
	{
		val += prt_int(n / 10);
	}
	val += _putchar((n % 10) + '0');
	
	return (val);
}
