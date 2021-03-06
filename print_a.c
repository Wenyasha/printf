#include "main.h"

/**
 * print_str - loops through a string and prints
 * every character
 * @l: va_list arguments from 0-printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to 0-printf
 * Return: number of char printed
*/
int print_str(va_list l, flagStruct *f)
{
	char *s = va_arg(l, char *);
	(void)f;
	if (!s)
		s = "(null)";
	return (_puts(s));
}

/**
 * print_char - prints a character
 * @l: va_list arguments from 0-printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to 0-printf
 * Return: number of char printed
*/
int print_char(va_list l, flagStruct *f)
{
	(void)f;
	_putchar(va_arg(l, int));
	return (1);
}
