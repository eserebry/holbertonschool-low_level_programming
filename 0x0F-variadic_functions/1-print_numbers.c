#include "variadic_functions.h"

/**
 * print_numbers - prints numbers, followed by a new line.
 *
 * @separator: string to be printed between numbers
 * @n: number of integers passed to the function
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;

	if (separator == NULL)
		return;
	va_start(valist, n);
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(valist, unsigned int));
		else
			printf("%d ,", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
