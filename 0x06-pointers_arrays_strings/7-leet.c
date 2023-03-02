#include "main.h"
/**
 * leet - string
 * @s: string
 * Return: string
 */
char *leet(char *s)
{
	int i, j;
	char *result = s;
	char *leetspeak[] = {"4", "3", "0", "7", "1"};
	char small[] = {'a', 'e', 'o', 't', 'l'};
	char capital[] = {'A', 'E', 'O', 'T', 'L'};

	for (i = 0; i < 5; i++)
	{
		for (j = 0; s[j]; j++)
		{
			if (s[j] == small[i] || s[j] == capital[i])
			{
				*result++ = *leetspeak[i];
			}
			else
			{
				*result++ = s[j];
			}
		}
		result = s;
	}
	return (s);
}
