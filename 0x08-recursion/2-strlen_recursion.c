/**
 * _strlen_recursion - return the lengthof string
 * @s: string to count its length
 * Return: string length
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);
return (1 + _strlen_recursion(s + 1));

}
