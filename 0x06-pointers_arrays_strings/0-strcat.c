#include "main.h"

/**
 * *_strcat - function that concatenates two strings @src to @dest
 *
 * @src: the source string to append to @dest
 *
 * @dest: the destination string to be concatenated upon
 *
 * Return:pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}

	dest[i] = '\0';

	return (dest);
}
