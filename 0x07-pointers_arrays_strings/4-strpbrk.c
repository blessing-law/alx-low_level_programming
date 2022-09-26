#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strpbrk - search for byte in string
 *
 * @s: string to be scanned
 * @accept: containing characters
 *
 * Return: pointer to byte in s
 */

char *_strpbrk(char *s, char *accept)
{
	char r;

	r = strpbrk(s, accept);
	return (r);
}
