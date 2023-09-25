#include <string.h>
#include "main.h"

/**
 * _strchr - find a character in a string
 * @s: pointer to the string s to be searched
 * @c: character to be found
 *
 * Return: pointer to the first occurence of the character c
 *
 * Created by: Abubakar habeeb
 * cc: 25th, september 2023.
 */

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}
