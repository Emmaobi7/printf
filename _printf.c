#include "main.h"
#include <stdio.h>

/**
 * _printf- prints formated text to stdout
 * @format: specified format
 * Return: 0
 */







int _printf(const char *format, ...)
{
	specifier all[] = {
		{"%c", print_c},
		{"%s", print_s}
	};

	int i;
	va_list args;
	va_start(args, format);
	
	i = 0;
	while (format[i] != '\0')
	{
		if (*format == *(all[i].p))
		{
			all[i].f(args);
		}
		i++;
	}
	va_end(args);
	return (1);
}

