#include "main.h"

/**
 * print_number - prints out an integer
 * @n: the integer to be printed out
 *
 * return: Always Successful (0)
 */
<<<<<<< HEAD
int print_number(int n)int print_number(int n)
=======
int print_number(int n)

{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar(n % 10 + '0');

	return (0);
}

/**
 * print_string - prints out a string
 * @c: the string to be printed out
 *
 * Return: Always Successful (0)
 */

int print_string(char *c)

{
	int len = strlen(c);
	int i = 0;

	while (i < len)
	{
		_putchar(c[i]);
		i++;
	}
	return (0);
}
>>>>>>> 0a2ec080e9310a14b1f03f7e746465a75b3b8fb8
