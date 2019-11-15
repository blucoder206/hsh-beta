#include <stdio.h>
/**
 * main - prints all arguments without argc
 * @argc: counts array size
 * @argv: elements of array
 * Return: nothing
 */
int main(int __attribute__((unused)) argc, char *argv[])
{
	int i;

	for (i = 0; argv[i] != 00; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
