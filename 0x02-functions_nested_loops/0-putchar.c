#include "main.h"
/**
 * main - This program prints _putchar
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
