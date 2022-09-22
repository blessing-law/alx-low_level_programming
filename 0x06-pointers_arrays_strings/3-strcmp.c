#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: first string to be compared
 * @s2: second string to be compared
 *
 * Return: -15 if s1<s2, 0 if s1=s2, 15 if s1>s2
 */

int _strcmp(char *s1, char *s2)
{
	int str;

	str = strcmp(s1, s2);

	if (str < 0)
	{
		return (-15);
	}
	else if (str > 0)
	{
		return (15);
	}
	else
	{
		return (0);
	}
	return (str);
}
