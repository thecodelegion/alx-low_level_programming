#include "main.h"

/**
  *_isupper - accepts character argument
  *
  *@c: parameter
  *Description: Checks if a character is uppercase
  *
  *Return: always 0 (Success)
*/

int _isupper(int c)
{
	if (c >= 65 && c < 91)
		return (1);
	else
		return (0);
}
