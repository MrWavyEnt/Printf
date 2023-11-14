#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

/**
 * struct format - converter for printf
 * @ph: type char pointer of the specifier
 * @function: function for the conversion specifier
 *
 */

typedef struct format
{
	char *ph;
	int (*function)();
} convert;

int _puthcar(char c);
int _printf(const char *format, ...);
int char_output(va_list val);
int str_output(va_list val);
int str_len(char *str);
int str_lenc(const char *str);
int print_perc(void);
int print_int(va_list args);
int print_dec(va_list arg);
int print_bin(va_list val);
int print_usint(va_list args);
int print_oct(va_list val);
int print_hex(va_list val);
int print_hex_1(unsigned int num);
int print_hex_2(unsigned int num);
int print_pointer(va_list val);
int print_hex_3(unsigned long int num);
int print_revstr(va_list args)

#endif
