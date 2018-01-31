#include "holberton.h"

/**
 * rev_string - reverses a string.
 *
 * @s: pointer to a first element of a string s
 */
void rev_string(char *s)
{
	int i;
	int k;
	char t;

	i = 0;
	k = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i = i - 1;
	if (i % 2 == 0)
	{
		while (i != k)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
			i--;
			k++;
		}
	}
	if (i % 2 != 0)
	{
		while (k < i)
		{
			t = s[k];
			s[k] = s[i];
			s[i] = t;
			i--;
			k++;
		}
	}

}
