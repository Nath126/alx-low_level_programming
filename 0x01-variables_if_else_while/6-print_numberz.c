#include <stdio.h>
/*
 * main-main block of the program
 * description: creates a program that prints all the single digit number of base 10 starting from 0
 * Return: Always 0 (successful)
 */
int main(void)
{
	int i = 0;

	while(i < 10)
	{
		putchar(48 + i);
		i++;
	}

	putchar("\n");
	return (0);
}
