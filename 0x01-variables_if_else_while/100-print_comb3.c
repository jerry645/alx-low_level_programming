#include <stdio.h>

/**
 * main - different combination of two digits
 * description: doubble digit
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	i = 48;
	j = 48;

	while (i < 58)
	{
		putchar(i);
		putchar(j);
		if (i < 56 || j < 57)
		{
			putchar(44);
			putchar(32);
		}
		j++;
	}
	i++;
}
putchar(10);

return (0);
}
