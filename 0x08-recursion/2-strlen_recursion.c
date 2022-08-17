#include "main.h"

/**
 * _strlen_recursion - Return the string length
 * @s: The string to be measured
 */
int _strlen_recursion(char *s)
{
	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}

	return (len);
}
