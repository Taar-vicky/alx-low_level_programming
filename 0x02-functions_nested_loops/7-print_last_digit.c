#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the number to be executed
 * Return: value of last digit of number
 */

int print_last_digit(int n)

{
	int last;

	last = n % 10;
	if (n < 0)
	{
	last = last * -1;
	}
	_putchar(last + '0');
	return (last);
}
