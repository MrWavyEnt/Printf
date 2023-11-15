#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

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

int _putchar(char c);
int _printf(const char *format, ...);
int char_output(char *str);
int str_output(va_list str);
int str_len(char *str);
int str_lenc(const char *str);
int print_perc(void);
int print_int(va_list args);
int print_dec(va_list arg);
int print_bin(va_list val);
int print_usint(unsigned int n);
int print_oct(unsigned int n);
int print_hex(va_list val);
int print_hex_1(unsigned int n);
int print_hex_2(unsigned int n, int base, int cap);
int print_pointer(va_list val);
int print_hex_3(unsigned int n,  int cap);
int print_revstr(va_list args);
int print_spec_str(va_list val);
int print_rot_13(va_list args);

int a_printf(const char *format, ...);
int a_putchar(char c);

#endif
