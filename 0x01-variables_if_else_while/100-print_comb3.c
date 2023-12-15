#include <stdio.h>

/**
 * main - prints all possible different combinations of two digits
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 48; digit1 <= 56; digit1++)
	{
		for (digit2 = 49; digit2 <= 57; digit2++)
		{
			if (mdigit2 > ndigit1)
			{
				putchar(digit1);
				putchar(digit2);
				if (digit1 != 56 || digit2 != 57)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
