#include "main"

/**
 * _puts - Print a string to stdout
 * @str: the string to be printed
 *
 */
void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
