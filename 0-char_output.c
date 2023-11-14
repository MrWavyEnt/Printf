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
/**
 * will look into if this loop breaks anything
 */
	if (str == '\0')
	{
		return (0);
	}

	_putchar(str);
	return (1);
}
