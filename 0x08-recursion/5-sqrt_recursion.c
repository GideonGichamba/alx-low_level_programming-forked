/**
 * _sqrt_recursion - calculate the square root of n;
 * @g:number to check if it is square root
 * @c:square to calculate its square root
 * Return: square root of g
 */
int sqrt_check(int g, int c)
{
if (g * g == c)
return (g);
if (g * g < 0)
return (-1);
return (sqrt_check(g + 1, c));
}

/**
 * _sqrt_recursion - calculate the square root of n;
 * @n:number to find its's square root
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
if (n == 0)
return (0);
return (sqrt_check(1, n));
}
