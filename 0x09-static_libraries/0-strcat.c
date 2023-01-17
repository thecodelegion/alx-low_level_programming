#include "main.h"

/**
 * _strcat - concatenates two strings.
 *
 * @dest: string to be appended to
 * @src: string to append
 *
 * Return: pointer to string @dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
