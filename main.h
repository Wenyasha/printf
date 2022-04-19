#ifndef _MAIN_
#define _MAIN_
#include "stdio.h"
#include "stdlib.h"
#include "stdarg.h"
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
int get_flag(char s, flagStruct *f);
int (*get_print(char s))(va_list, flagStruct *);

#endif /*_MAIN_*/
