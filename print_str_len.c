#include "main.h"

/**
 * str_len - Calculate the length of a string
 * @s: The input string
 *
 * Return: The length of the string
 */
int str_len(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
		;
	return (i);
}
