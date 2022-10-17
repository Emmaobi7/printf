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

	unsigned int i;
	va_list args;
	va_start(args, format);
	
	for (i = 0; format[i]; i++)
	{
		if (format[i] == *(all[i].p))
		{
			all[i].f(args);
		}
	}

	va_end(args);
<<<<<<< HEAD
	return (1);
=======
	printf("\n");
	return (0);
>>>>>>> refs/remotes/origin/main
}

