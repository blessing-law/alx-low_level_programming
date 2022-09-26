#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strstr - find substring
 * @haystack: string to be scanned
 * @needle: string to be searched in haystack
 *
 * Return: pointer to located string
 */

char *_strstr(char *haystack, char *needle)
{
	char r;

	r = strstr(haystack, needle);
	return (r);
}
