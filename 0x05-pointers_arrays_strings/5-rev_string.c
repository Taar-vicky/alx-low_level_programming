#include "main.h"
#include <stdio.h>
/**
 * rev_string - This fuction print a string reverser
 *
 * @s: this is the pointer that point to a string
 * Return: string in reverse
 */

void rev_string(char *s)

{
	char rv = s[0];
	int c = 0;
	int i;

	while (s[c] != '\0')
		c++;
	for (i = 0; i < c; i++)
	{
		c--;
		rv = s[i];
		s[i] = s[c];
		s[c] = rv;
	}
}
