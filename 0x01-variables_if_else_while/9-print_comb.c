#include <stdio.h>


/**
  *main - Entry point of the program
  *
  *Description: prints numbers 0-9 separated by commas in ascending order
  *
  *Return:0 (Success)
*/

int main(void)
{
  int i;

  for (i = 0; i < 10; i++)
  {
    putchar(i);

    if (i < 9)
    {
      putchar(',');
      putchar(' ');
    }
  }

  putchar('\n');