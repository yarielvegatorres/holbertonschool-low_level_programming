#include "main.h"
#include <stdio.h>
void print_alphabet(void);

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		putchar (letter);
	}
		putchar ('\n');
}
