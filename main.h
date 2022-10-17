#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
	
int _printf(const char *format, ...);
int print_s(va_list);
int print_c(va_list);
int print_int(va_list);







typedef struct print
{
	char *p;
	int (*f)(va_list);
}specifier;
#endif
