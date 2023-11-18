#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int _putchar(char c);
int print_binary_con(va_list val);
size_t print_HEX_3(unsigned long int value);
int main(void);
int print_HEX_2(va_list args);
int char_output(va_list args);
int print_hex_4(va_list args);
int print_hex_str(va_list args);
int print_oct(va_list args);
int print_perc(void);
int print_ptr(va_list val);
int print_rev_str(va_list args);
int print_hex_str(va_list args);

#endif
