#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints all alphabet letters in lowercase then uppercase
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int lowercase = 'a';
	int uppercase = 'A';

	while (lowercase <= 'z')
	{
		putchar(lowercase);
		lowercase++;
	}
	while (uppercase <= 'Z')
	{
		putchar(uppercase);
		uppercase++;
	}

	putchar('\n');

	return (0);
}
