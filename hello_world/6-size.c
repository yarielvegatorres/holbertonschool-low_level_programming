#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)

{
	printf("size of a char: %zu bytes(s)\n", sizeof(char));
	printf("size of an int: %zu bytes(s)\n", sizeof(int));
	printf("size of a long int: %zu bytes(s)\n", sizeof(long int));
	printf("size of a long long int: %zu bytes(s)\n", sizeof(long long int));
	printf("size of a float: %zu bytes(s)\n", sizeof(float));
	return (0);
}
