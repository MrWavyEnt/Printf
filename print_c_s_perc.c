#include "main.h"

/**
 * char_output - function that prints a character.
 * @val: arguments.
 *
 * Return: integer.
 */

int char_output(char val)
{
	return (_putchar(val)); 
}

#include "main.h"

/**
* prt_strg - function to print case s
* @str: pointer to string
* Return: number of characters printed
*/

int str_output(char *str)
{
	int count = 0;
	int i;
	
	if (str == NULL)
	{
		str = "(null)";
		{
			for (i = 0; str[i]; i++)
			count += _putchar(str[i]);
		}
		_putchar('\n');
		return (6);
	}
	
	while (*str != '\0')
	
	{
		prt_c((int)*str);
		count++;
		str++;
	}
	return (count);
}

/**
 * str_lenc - strlen function but for the constant char pointer str
 *
 * @str: the character pointer
 *
 * Return: a
 */

int str_lenc(const char *str)
{
	int a;

	for (a = 0; str[a] != 0; a++)
			;
	return (a); 
}


#include "main.h"

/**
 * print_perc - function that prints out %
 *
 * Return: an integer
 */

int prt_per(void)
{
	_putchar(37);
	return (1); 
}
