#ifndef _MAIN_
#define _MAIN_
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
int _printf(const char *format, ...);
int _putchar(char c);

/**
 * struct flags - structure containing flags
 * @plus: '+'
 * @space: ' '
 * @hash: '#'
 */

typedef struct flags
{
	int plus;
	int space;
	int hash;
} flagStruct;

/**
 * struct printHandler - struct to choose the right fxn
 * @c: format specifier
 * @f: pointer to correct printng function
 */

typedef struct printHandler
{
	char c;
	int (*f)(va_list ap, flagStruct *f);
} ph;

int get_flag(char s, flagStruct *f);
int (*get_print(char s))(va_list, flagStruct *);
int print_hex(va_list l, flagStruct *f);
int print_hex_big(va_list l, flagStruct *f);
int print_binary(va_list l, flagStruct *f);
int print_octal(va_list l, flagStruct *f);
int print_int(va_list l, flagStruct *f);
void print_number(int n);
int print_unsigned(va_list l, flagStruct *f);
int count_digit(int i);
int print_hex(va_list l, flagStruct *f);
int print_hex_big(va_list l, flagStruct *f);
int print_binary(va_list l, flagStruct *f);
int print_octal(va_list l, flagStruct *f);
int print_rot13(va_list l, flagStruct *f);
int print_rev(va_list l, flagStruct *f);
int print_bigS(va_list l, flagStruct *f);
int print_ad(va_list l, flagStruct *f);
int print_percent(va_list l, flagStruct *f);
int print_str(va_list l, flagStruct *f);
int print_char(va_list l, flagStruct *f);
#endif /*_MAIN_*/
