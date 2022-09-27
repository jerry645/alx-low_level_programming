#include "main.h"
#include <stdio.h>

/**
 * _memset - fills memory witht a constant type.
 * @s: memory space to be filled
 * @b: byte to fill with
 * @n: number of spaces to fill.
 *
 * Return: ponter to memory area s
 */

char *_memset(char *s, char *b, unsigned int n)
{
	unsigned short int i = 0;

	for (; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
