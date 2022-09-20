#include "main.h"

/**
 * _puts - prints a string and a new line
 * @str: pointer to a string to print 
 *
 * Retun: 0
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_puts(str[i]);
		i++;
	}
	_puts('\n');
}
