#include <stdio.h>
/**
 * main -main block
 * Return:0
 */
int main(void)
{

	char c;
	int i;
	long int li;
	long long int lli;
	float f;
	printf("Size of a char: %id byte(s)\n", (unsigned long)sizeof(c));
	printf("Size of an int: %id byte(s)\n", (unsigned long)sizeof(i));
	printf("Size of a long int %id byte(s)\n", (unsigned long)sizeof(li));
	printf("Size of a long long int %id byte(s)\n", (unsigned long)sizeof(lli));
	printf("Size of a float %id byte(s)\n", (unsigned long)sizeof(f));
	return (0);

}
