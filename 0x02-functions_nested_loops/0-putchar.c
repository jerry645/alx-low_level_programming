#include <main.h>
/**
 * main - prints putchar
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char *sh = "_putchar";

	while (*sh)
	{
		_putchar(*sh);
		sh++;
	}
	putchar('\n');

	return (0);
}
