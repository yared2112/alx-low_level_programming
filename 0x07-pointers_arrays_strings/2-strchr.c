#include "main.h"

/**
 * _strchr - locate character in string
 * @s: string to check
 * @c: character to locate
 * Return: the pointer to first occurence of c or return NULL
 */
char *_strchr(char *s, char c)
{
int i;

for (i = 0; *(s + i) != '\0';)
{
i++;
if (*(s + i) == c)
return (s + i);
}

return (0);
}
