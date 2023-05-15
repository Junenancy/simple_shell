#include "shell.h"
/**
 * _strcmp - function that compares two strings
 * @s1: parameter
 * @s2: parameter
 * Return: an integer to an array
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/**
 * _strlen - function to return the lenght of a string
 * @s: string
 * Return: the lenght of a string
 */
int _strlen(char *s)
{
	int c = 0, y = 0;

	while (s[y] != '\0')
	{
		c++;
		y++;
	}
	return (c);
}
/**
 * _strdup - function that backs a pointer to array
 * @str: parameter
 * Return: an array
 */
char *_strdup(char *str)
{
	char *arr;
	unsigned int i, size;

	if (str == 0)
		return (NULL);

	size = _strlen(str) + 1;

	arr = (char *)malloc(size * sizeof(char));

	if (arr == 0)
		return (NULL);

	for (i = 0; *(str + i) != '\0'; i++)
		*(arr + i) = *(str + i);

	*(arr + i) = '\0';

	return (arr);
}
/**
 * _equal - functiom that finds same characters
 * @dest: parameter
 * @src: parameter
 * Return: an integer
 */
int _equal(char *dest, char *src)
{
	int i = 0;

	while (*dest + i != '\0' && *src + i != '\0')
	{
		if (*dest != *src)
			return (0);
		dest++;
		src++;
	}
	return (*src == '\0');
}
/**
 * _strstr - function to find
 * @haystack: parameter
 * @needle: parameter
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	if (*haystack == '\0')
		return (0);

	if (haystack[0] != needle[0])
		return (NULL);

	if (*needle == '\0')
		return (haystack);

	while (*haystack != '\0')
	{
		if ((*haystack == *needle) && _equal(haystack, needle))
			return (haystack);
		haystack++;
	}

	return (0);
}
