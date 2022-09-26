#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string to be searched
 * @c: character to be searched for
 *
 * Return: character c or null
 */

char *_strchr(char *s, char c)
{
	char *ret;

	ret = strchr(s, c);

	return (ret);
}
