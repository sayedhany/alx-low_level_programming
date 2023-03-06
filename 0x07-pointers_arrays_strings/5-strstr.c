#include "main.h"

/**
 * _strstr - string
 * @haystack: string
 * @needle: string
 * Return: string
 */

char *_strstr(char *haystack, char *needle)
{
	 char *p = haystack;
	 char *q = needle;

	 while (*p)
	 {
		 if (*p == *q)
		 {
			 char *tmp_p = p;
			 char *tmp_q = q;
			 while (*tmp_p && *tmp_q && *tmp_p == *tmp_q)
			 {
				 tmp_p++;
				 tmp_q++;
			 }
			 if (!*tmp_q)
				 return (p);
		 }
		 p++;
	 }
	 return (NULL);
}
