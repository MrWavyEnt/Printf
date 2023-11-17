#ifndef MAIN_H
#define MAIN_H
#include <limits.h>
#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>

int _printf(const char *format, ...);
int print_unsigned_1(va_list types, char buffer[], int flags, int width, int precision, int size;
int print_hexadecimal_1(va_list types, char buffer[], int flags, int width, int precision, int size;
int print_hexa_upper_1(va_list types, char buffer[], int flags, int wiidth, int precision, int size);
int print_hexa_1(va_list types, char map_to[], char buffer[], int flags, char flag_ch, int width, int precision, int size);

#endif
