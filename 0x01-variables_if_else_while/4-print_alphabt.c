#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints all lowercase letters except 'e' and 'q'
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int letter = 'a';

	while (letter <= 'z')
	{
		if ((letter != 'e') && (letter != 'q'))
		{
			putchar(letter);
		}
		letter++;
	}

	putchar('\n');

	return (0);
}
