#include "main.h"

/**
 * swap_int: -  function that swaps the value of integer a and b
 *
 * Description: swap_int, swaps the value of integer a and b
 * @a: pointer 1
 * @b: pointer 2
 * Return: 0
 */

void swap_int(int *a, int *b)
{
	*a += *b;
	*b = *a - *b;
	*a = *a - *b;
}
