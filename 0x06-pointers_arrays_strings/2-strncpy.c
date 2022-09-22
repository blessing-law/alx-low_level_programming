#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncpy - copy a string
 * @dest: string to be copied to
 * @src: string to  be copied
 * @n: number of characters to be copied
 *
 * Return: dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
