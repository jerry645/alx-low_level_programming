#include <main.h>
/**
 * main - prints putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "Holberton";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
