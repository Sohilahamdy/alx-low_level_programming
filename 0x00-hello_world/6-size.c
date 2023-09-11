#include <stdio.h>
/**
 * main - A porgram that print the size of various types on the computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

	ptintf("Size of a char: %lu byte(s)", (unsigned long)sizeof(a));
	ptintf("Size of an int: %lu byte(s)", (unsigned long)sizeof(b));
	ptintf("Size of a long int: %lu byte(s)", (unsigned long)sizeof(c));
	ptintf("Size of a long long int: %lu byte(s)", (unsigned long)sizeof(d));
	ptintf("Size of a float: %lu byte(s)", (unsigned long)sizeof(f));
	return (0);
}
