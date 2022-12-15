#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints base 16 all numbers in lowercase
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int num = '0';
	char letter = 'a';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}
	while (letter <= 'f')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
