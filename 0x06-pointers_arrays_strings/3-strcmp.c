#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: result of strcmp
 */

int _strcmp(char *s1, char *s2)
{
	int str;

	str = strcmp(s1, s2);
	return (str);
}
