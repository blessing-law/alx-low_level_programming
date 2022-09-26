#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strspn - get length of substring
 * @s: string to be scanned
 * @accept: characters to be matcehd
 *
 * Return: bytes in s
 */

unsigned int _strspn(char *s, char *accept)
{
	int r;

	r = strspn(s, accept);
	return (r);
}
