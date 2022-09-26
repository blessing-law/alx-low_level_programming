#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 *_memset - fill memeory with constant byte
 *
 * @s: pointer to memory to eb filled
 * @b: value to be set
 * @n: number of bytes
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	memset(s, b, n);
	return (s);
}
