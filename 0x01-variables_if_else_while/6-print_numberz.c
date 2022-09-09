#include <stdio.h>
/*
 *main- entry point 
 * description: prints the single digit number of base 10 starting from 0
 * Return: Always 0 (successful)
 */
int main(void)
{
	int numberz = 0;

	while (numberz < 10)
	{
		putchar(48 + numberz);
		numberz++;
	}

	putchar('\n');
	return (0);
}
