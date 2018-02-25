#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_int - prints an argument, if its an int
 *
 * @valist: variadic function
 */
void print_int(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_str - prints an argument, if its an str
 *
 * @valist: variadic function
 */
void print_str(va_list valist)
{
	char *str;

	str = va_arg(valist, char *);
	if (str == NULL)
		str = "(nil)";
	printf("%s", str);
}

/**
 * print_char - prints an argument, if its an char
 *
 * @valist: variadic function
 */
void print_char(va_list valist)
{
	printf("%c", va_arg(valist, int));
}

/**
 * print_float - prints an argument, if its an float
 *
 * @valist: variadic function
 */
void  print_float(va_list valist)
{
	printf("%f", (float)va_arg(valist, int));
}

/**
 * print_all - prints prints anything.
 *
 * @format: list of types of arguments passed to the function
 */
void print_all(const char * const format, ...)
{
	print_t prt[] = {
		{"c", print_char},
		{"i", print_int},
		{"f", print_float},
		{"s", print_str},
		{NULL, NULL}
	};
	va_list valist;
	char *sep = "";
	int i = 0;
	int j = 0;

	va_start(valist, format);
	while (format[j] != '\0' && format != NULL)
	{
		while (prt[i].print != NULL)
		{
			if (format[j] == *prt[i].print)
			{
				printf("%s", sep);
				prt[i].f(valist);
			}
			i++;
		}
		sep = ", ";
		i = 0;
		j++;
	}
	printf("\n");
	va_end(valist);
}
