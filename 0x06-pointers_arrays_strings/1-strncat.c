/**
 * _strncat - append src to dest
 * @dest: string to be appended to
 * @src: String to append
 * @n: src bytes
 * Return: resturn appended string
 */

char *_strncat(char *dest, char *src, int n)
{
int i, j;
i = j = 0;
while (*(dest + i))
i++;
while (j < n && *(src + j))
{
*(dest + i) = *(src + j);
i++;
j++;
}
if (j < n)
*(dest + i) = *(src + j);
return (dest);
}
