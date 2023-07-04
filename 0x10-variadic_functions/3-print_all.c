#include "variadic_functions.h"

/**
 * print_all - a function that prints anything
 * @format: arguments passed to the function
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	unsigned int i;
	va_list args;
	char *j, *separator;

	va_start(args, format);

	separator = "";

	i = 0;
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", separator,  va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 's':
				j = va_arg(args, char *);
				if (j == NULL)
					j = "(nil)";
				printf("%s%s", separator, j);
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}

	printf("\n");
	va_end(args);
}
