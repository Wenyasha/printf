#ifndef _MAIN_
#define _MAIN_
#include "stdio.h"
#include "stdlib.h"
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
}flagStruct;
int get_flag(char s, flags_t *f);

#endif /*_MAIN_*/
