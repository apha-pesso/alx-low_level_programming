#include "main.h"

/**
 * _strcat - The function concatenates two given strings
 * @dest: Base string
 * @src: string to be added to base string
 * Return: ptr
 */

char *_strcat(char *dest, char *src)
{
	int count = 0, count2 = 0;

	while (*(dest + count) != '\0')
	{
		count++;
	}

	while (count2 >= 0)
	{
		*(dest + count) = *(src + count2);
		if (*(src + count2) == '\0')
			break;
		count++;
		count2++;
	}
	return (dest);
}
