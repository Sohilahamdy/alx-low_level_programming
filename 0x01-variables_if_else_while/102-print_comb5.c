#include <stdio.h>
/**
 * main - entry point
 *
 * Description: print all alphabet letters
 *
 * Return: 0
*/
int main(void)
{
	int firstDigit = 0, seconDidit;

	while (firstDigit <= 99)
	{
		seconDigit = firstDigit;
		while (secnDigit <= 99)
		{
			if (secinDigit != firstDigit)
			{
				putchar((firstDigit / 10) + 48);
				putchar((firstDigit % 10) + 48);
				putchar(' ');
				putchar((seconDigit / 10) + 48);
				putchar((deconDigit % 10) + 48);

				if (firstDigit != 98 || seconDigit != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			seconDigit++;
		}
		firstDigit++;
	}
	putchar('\n');
	return (0);
}
