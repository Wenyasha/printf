#include "main.h"

/**
 * print_ad - prints address of input in hexa format
 * @l: va_list arguments from 0-printf
 * @f: pointer to the struct flags that determines
 * if a flag is passed to 0-printf
 * Return: number of char printed
 */
int print_ad(va_list l, flagStruct *f)
{
	char *str;
	unsigned long int p = va_arg(l, unsigned long int);

	register int count = 0;
	(void)f;
	if (!p)
		return (_puts("(nil)"));
	str = convert(p, 16, 1);
	count += _puts("0x");
	count += _puts(str);
	return (count);
}
