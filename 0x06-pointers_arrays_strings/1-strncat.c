#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * _strncat - concateneate two strings
 * @dest: first string
 * @src: second string
 * @n: number of characters from second string
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}
