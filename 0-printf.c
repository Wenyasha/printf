#include "main.h"

/**
 * _printf - produces output according to a format
 * @format: string containgi characterrs and specifiers
 * Return: number of characters printed
 */

int _printf(const char *format, ...)
{
	unsigned int i = 0;
	int (*pfunc)(va_list, flagStruct);
	va_list args;
	const char *p;
	flagStruct flags = {0, 0, 0};

	va_start(args, format);
	if (!format || (format[0] == '%' && !format[1]))
		return (-1);
	if (format[0] == '%' && format[1] == ' ' && !format[2])
		return (-1);
	for (p = format; *p; p++)
	{
		if (*p == '%')
		{
			p++;
			if (*p == '%')
			{
				count += _putchar('%');
				continue;
			}
			while (get_flag(*p, &flags))
				p++;
			pfunc = get_print(*p);
			count += (pfunc)
				? pfunc(arguments, &flags)
				: _printf("%%%c", *p);
		}
		else
			count += _putchar(*p);
	}
	_putchar(-1);
	va_end(args);
	return (count);

}
