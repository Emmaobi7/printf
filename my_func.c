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
	int i;

	ptr = va_arg(s, char *);

	if (ptr == NULL)
		ptr = "(nil)";

	i = 0;
	while (ptr[i] != '\0')
	{
		putchar(ptr[i]);
		i++;
	}
	return (i);
}


/**
 * print_c- prints a character
 * @c: character specifier
 * Return 0
 */

int print_c(va_list c)
{
	char p;
	p =va_arg(c, int);
	putchar(p);

	return(1);

}
