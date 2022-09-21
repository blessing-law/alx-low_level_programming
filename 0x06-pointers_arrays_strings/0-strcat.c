#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatinate two strings
 *
 * @dest: first string
 * @src: second string
 *
 * Return: pointer to dest
 */

char *_strcat(char *dest, char *src)
{
	char dest[100];
	char scr[];

	strcat(dest, src);

	return (dest);
}
