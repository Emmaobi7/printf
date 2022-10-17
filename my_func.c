#include <stdarg.h>
#include "main.h"
#include <stdio.h>
#include <unistd.h>

/**
 * print_s- prints a string
 * @s: the string
 * Return 0
 */






int print_s(va_list s)
{
	char *ptr;

	ptr = va_arg(s, char *);

	if (ptr == NULL)
		ptr = "(nil)";

	while (*ptr != '\0')
	{
		write(1, &ptr, 1);
		ptr++;
	}
	return (0);
}


/**
 * print_c- prints a character
 * @c: character specifier
 * Return 0
 */

int print_c(va_list c)
{
	char p;
	p = va_arg(c, int);

	return (write(1, &c, 1));
}
