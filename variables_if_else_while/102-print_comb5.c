#include <stdio.h>

/**
 * main - prints all possible different combinations of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, a, b, c, d;

	for (i = 0; i <= 98; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{

			a = i / 10;
			b = i % 10;
			putchar(a + '0');
			putchar(b + '0');

			putchar(' ');

			c = j / 10;
			d = j % 10;
			putchar(c + '0');
			putchar(d + '0');

			if (!(i == 98 && j == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
