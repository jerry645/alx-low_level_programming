#include "main.h"
#include <stdio.h>

/**
 * print_array - prints 'n' elements of an array of integers
 * @a: int type array pointer
 * @n: int type integer
 * Description: numbers must be seperated by comma and space.
 * numbers should be displayed in the samr order they are stored in array.
 * you can only use _putchar to print.
 */

void print_array(int *a, int n)
{
	int i;

	i = 0;
	for (n--; n >= 0; n--, i++)
	{
		printf("%d", a[i]);
		if (n > 0)
		{
			printf(", ");
		}
	}
	printf("\n");
}
