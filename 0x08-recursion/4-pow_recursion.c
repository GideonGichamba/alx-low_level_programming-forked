/**
 * _pow_recursion - raise x to power of y
 * @x: number to raise by
 * @y: number to power to x
 * Return: the power
 */
int _pow_recursion(int x, int y)
{
if (y < 0)
return (-1);
if (y == 0)
return (1);
return (x * _pow_recursion(x, y - 1));
}
