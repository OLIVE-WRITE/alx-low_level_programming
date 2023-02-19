#include <stdio.h>

/**
 * main - prints the alphabet in lowercase, except for q and e
 * Return: 0 on success
 */
int main(void)
{
	char letter = 'a';

	while (letter <= 'z')
	{
		if (letter != 'e' && letter != 'q')
			putchar(letter);
		letter++;
	}
	putchar('\n');
	return (0);
}

