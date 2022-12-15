#include <stdio.h>

/**
  *main - Entry point of the program
  *
  *Description: prints all base 10 numbers
  *
  *Return: Alwayd 0 (Success)
*/

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d\n", num);
		num++;
	}

	putchar('\n');

	return (0);
}
