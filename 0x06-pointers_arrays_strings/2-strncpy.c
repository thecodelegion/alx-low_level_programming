#include "main.h"

/**
 *_strncpy - copies a string
 *
 * @src: source of string
 * @dest: destination of the string
 * @n: length of bytes
 *
 * Return: pointer to the resulting string @dest
 */

char *_strncpy(char *dest, char *src, int n)
{
int i;

	for (i = 0; i < n && *(src + i); i++)
	{
		*(dest + i) = *(src + i);
	}
	for (; i < n; i++)
	{
	*(dest + i) = '\0';
	}
	return (dest);

}
