#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _memcpy - copy memory area
 * @dest: area to be copied to
 * @src: area to be copied from
 * @n: number of bytes
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
