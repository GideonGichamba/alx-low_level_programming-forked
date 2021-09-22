#include<stdlib.h>
/**
 * create_array- function to create an array
 * @size:size of an array
 * @c:characeter;
 * Return
 */
char *create_array(unsigned int size, char c)
{
unsigned int i;
char *a;
a = malloc(size * sizeof(char));
if (a == NULL)
return (NULL);
for (i = 0; i < size; i++)
*(a + i) = c;
return (a);
}
