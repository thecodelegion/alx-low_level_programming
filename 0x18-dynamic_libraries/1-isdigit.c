#include "main.h"

/**
* _isdigit - write a function that check for a digit (0 through 9).
* @c: char to check
* Return:  0 if @c digit, 1 otherwise.
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
