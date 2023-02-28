#include <stdio.h>
#include <string.h>

/**
 * print_rev - Prints a string in reverse, followed by a new line.
 * @s: The string to be printed in reverse.
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; >= 0; i--)
		putchar(s[i]);

	putchar('\n');
}
