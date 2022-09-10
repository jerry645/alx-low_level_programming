#include <stdio.h>

/**
 * main - prints the alphabets in lowercase, and then i uppercase,
 * followed by a newlline
 * Return: Always 0 (success)
 */
int main(void)
{
	int ch;

	for (ch ='a'; ch <= 'z'; ch++)
		putchar(ch);
	for (ch = 'A'; ch <= 'Z'; ch++ )
		putchar(ch);
	putchar('\n');
	return (0);
}
