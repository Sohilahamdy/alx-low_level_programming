#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all alphabet in lowercase then in uppercase
 *
 * Return: 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char ch = 'A';

	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	/*prints A - Z*/
	while (ch <= 'Z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
