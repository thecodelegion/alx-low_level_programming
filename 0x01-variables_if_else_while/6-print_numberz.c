#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints base 10 digits using putchar
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int num = '0';

	while (num <= '9')
	{
		putchar(num);
		num++;
	}

	putchar('\n');

	return (0);
}
