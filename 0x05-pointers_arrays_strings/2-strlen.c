/**
 * _strlen - length of a string
 * @s: string to count
 * return: strring length
 */
int _strlen(char *s)
{
int i = 0;
while (*(s + i))
i++;
return (i);
}
