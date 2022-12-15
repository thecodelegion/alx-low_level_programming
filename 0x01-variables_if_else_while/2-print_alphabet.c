#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints all alphabet letters in lowercase
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	putchar('\n');

	return (0);
}
