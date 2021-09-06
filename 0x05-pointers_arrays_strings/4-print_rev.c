/**
 * print_rev - reverse a string add newline
 * @s: string parameter
 * Return: nothing
 */
void print_rev(char *s)
{
 int i=0;
 while (*(s + i))
 i++;
 i=i-1;
 while (i >= 0)
 {
     putchar(*(s + i));
     i--;

 }
   putchar('\n');
   
}