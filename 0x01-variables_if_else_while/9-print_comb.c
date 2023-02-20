/**
 * main - Entry point
 *
 * Description: Prints all possible combinations of single-digit numbers
 * separated by ,, followed by a space in ascending order
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 48;

	while (num <= 57)
	{
		putchar(num);

		if (num != 57)
		{
			putchar(',');
			putchar(' ');
		}

		num++;
	}

	putchar('\n');

	return (0);
}

