#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum variable argument
 * @n: the argument number
 * @...: the integers sum
 */

int sum_them_all(const unsigned int n, ...)
{
	int s = 0, i = n;
	va_list a;

	if (!n)
		return (0);
	va_start(ap, n);
	while (i--)
		s += va_arg(ap, int);
	va_end(ap);
	return (s);
}
