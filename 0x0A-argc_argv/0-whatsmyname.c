#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point
 * @argc: argument count
 * @argv: array of arguments
 * Return: return 1 0r zero
 */
int main(int argc __attribute__((unused)), char **argv)
{
printf("%s\n", argv[0]);
exit(EXIT_SUCCESS);
}
