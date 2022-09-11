#include <stdio.h>

/**
 * main - three combination
 * Description: combination of three number
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, m, l;

	for (n = 48; n < 58; n++)
	{
		for (m = 49; m < 58; m++)
		{
			for (l = 50; l < 58; l++)
			{
				if (n == m || m == l || n == l )
				{
					continue;
				}
					putchar(n);
					putchar(m);
					putchar(l);
					if (n == 55 && m == 56 && l == 57)
					{
						break;
					}
					else
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
