#include "main.h"

/**
 * _puts_recursion - prints a string, then prints a new line.
 * @s: string
 * Return: no return
 */
void _puts_recursion(char *s)
{

	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
