#include "main.h"
/**
 * main - To print putchar
 * Description: print out the character putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char ch[] = "_putchar";
	int i;

	for (i = 0; ch[i] != '\0'; i++)
	{
		_putchar(ch[i]);
	}
	_putchar('\n');
	return (0);
}
