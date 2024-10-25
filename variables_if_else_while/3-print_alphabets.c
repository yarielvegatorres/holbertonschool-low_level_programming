#include <stdio.h>
/**
 * main - Prints the alphabet in lowercase and uppercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char lower = 'a';
	char upper = 'A';

	while (lower <= 'z')
		putchar (lower++);
	while (upper <= 'Z')
		putchar(upper++);
	putchar('\n');
	return (0);
}
