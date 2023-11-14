#ifndef MAIN_H
#include "main.h"

/**
 * char_output - prints a char.
 * @val : arguments.
 * Return: 1
 */
int char_output(va_list val)
{
	char str;

	str = va_arg(val, int);
	_putchar(str);
	return (1);
}
