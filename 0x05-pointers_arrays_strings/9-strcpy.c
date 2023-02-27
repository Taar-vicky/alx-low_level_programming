#include "main.h"

/**
 * _strcpy - Copiar el contenido de uno a otra variable
 * @dest: This is destiny
 * @src: This is the copia
 *
 * Return: This return copy
 */
char *_strcpy(char *dest, char *src)
{
	int len = 0;

		while (*(src + len) != '\0')
		{
			*(dest + len) = *(src + len);
		len++;
		}
	*(dest + len) = '\0';
	return (dest);
}
