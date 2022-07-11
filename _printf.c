#include "main.h"

/**
<<<<<<< HEAD
 * _printf - function my printf
 * @format: string whit format to print
 * Return: number of chars that print
=======
 * _printf - formatted output conversion and print data.
 * @format: input string.
 * Return: number of chars printed.
>>>>>>> e4874e39833d63b67c8c5ef8975e2e3cb0f6aa7e
 */

int _printf(const char *format, ...)
{
<<<<<<< HEAD
va_list args;
int length = 0;
if (format == NULL)
return (-1);
va_start(args, format);
length = _print_format(format, args);
va_end(args);
return (length);
}
=======
unsigned int i = 0, len = 0, ibuf = 0;
va_list arguments;
int (*function)(va_list, char *, unsigned int);
char *buffer;
va_start(arguments, format), buffer = malloc(sizeof(char) * 1024);
if (!format || !buffer || (format[i] == '%' && !format[i + 1]))
return (-1);
if (!format[i])
return (0);
for (i = 0; format && format[i]; i++)
{
if (format[i] == '%')
{
if (format[i + 1] == '\0')
{	print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (-1);
}
else
{	function = get_print_func(format, i + 1);
if (function == NULL)
{
if (format[i + 1] == ' ' && !format[i + 2])
return (-1);
handl_buf(buffer, format[i], ibuf), len++, i--;
}
else
{
len += function(arguments, buffer, ibuf);
i += ev_print_func(format, i + 1);
}
} i++;
}
else
handl_buf(buffer, format[i], ibuf), len++;
for (ibuf = len; ibuf > 1024; ibuf -= 1024)
;
}
print_buf(buffer, ibuf), free(buffer), va_end(arguments);
return (len);
}
>>>>>>> e4874e39833d63b67c8c5ef8975e2e3cb0f6aa7e
