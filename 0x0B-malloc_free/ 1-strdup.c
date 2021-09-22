#include<stdlib.h>
/**
 * _strdup -  function returns a pointer to a new string which is a duplicate of the string
 * @str: copy of the string;
 * Return: allocated string;
 */
char *_strdup(char *str)
{
int i;
char *s;
for(i = 0; str[i];++i );
s=malloc(i*sizeof(char));
if (s == NULL || i == 0)
return(NULL);

for(i=0;str[i];i++)
*(s + i) = *(str +i);
return(s);
}