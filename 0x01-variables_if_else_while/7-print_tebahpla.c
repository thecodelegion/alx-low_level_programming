#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints all lowercase letters in reverse
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int letter = 'z';

	while (letter >= 'a')
	{
		putchar(letter);
		letter--;
	}

	putchar('\n');

	return (0);
}
