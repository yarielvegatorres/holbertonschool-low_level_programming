#include <stdio.h>
/**
 * main - Prints all numbers of base 16 in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int num;

	for (num = 0; num < 16; num++)
		if (num < 10)
			putchar (num + '0');
		else
	putchar (num - 10 + 'a');
	putchar ('\n');
	return (0);
}
