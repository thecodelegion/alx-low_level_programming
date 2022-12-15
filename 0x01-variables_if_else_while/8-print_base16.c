#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints a number in base 16
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int num;
	char la;

	for (num = 0; num < 10; num++)
		printf((num % 10) + '0');

	for (la = 'a'; la <= 'f'; la++)
		putchar(la);
	putchar('\n')

	return (0);

