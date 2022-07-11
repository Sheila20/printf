#include "main.h"

/**
<<<<<<< HEAD
 *  _printf - Receives the main string and all the necessary parameters to
=======
 * _printf - Receives the main string and all the necessary parameters to
>>>>>>> 102d107b958fd2463349c385eba8e7478aae7cf0
 * print a formated string
 * @format: A string containing all the desired characters
 * Return: A total count of the characters printed
 */

int _printf(const char *format, ...)
<<<<<<< HEAD

=======
>>>>>>> 102d107b958fd2463349c385eba8e7478aae7cf0
{
int printed_chars;
conver_t f_list[] = {
{"c", print_char},
{"s", print_string},
{"%", print_percent},
{"d", print_integer},
{"i", print_integer},
{"b", print_binary},
{"r", print_reversed},
{"R", rot13},
{"u", unsigned_integer},
{"o", print_octal},
{"x", print_hex},
{"X", print_heX},
{NULL, NULL}
};
va_list arg_list;
if (format == NULL)
<<<<<<< HEAD
return (-1)
=======
return (-1);
>>>>>>> 102d107b958fd2463349c385eba8e7478aae7cf0
va_start(arg_list, format);
/*Calling parser function*/
printed_chars = parser(format, f_list, arg_list);
va_end(arg_list);
return (printed_chars);
}
<<<<<<< HEAD
=======

>>>>>>> 102d107b958fd2463349c385eba8e7478aae7cf0
