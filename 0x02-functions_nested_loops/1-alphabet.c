#include <main.h>

/**
 * main - print alphabet letters in lowercase 
 *
 * Return; Always (0)
 *
 */
void print_alphabet(void)
{
	int n;

	for (n = 'a'; n <= 'z'; n++)
	{
		putchar(n);
	}

	putchar("\n");
}
