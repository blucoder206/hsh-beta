#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <limits.h>
/**
* *_strcat - concatenate two strings
* @src: string one
* @dest: string two, at the end both strings will save there
* Return: dest
**/
char *_strcat(char *dest, char *src)
{
	int i, j, l;

	for (i = 0; dest[i] != 00; i++)
	{
	}
	for (j = 0; src[j] != 00; j++)
	{
	}
	for (l = 0; l < j; l++)
	{
	dest[i + l] = src[l];
	}
	return (dest);
}
/**
 * main - stat example
 *
 * Return: Always 0.
 */
int main(int ac, char **av)
{
    unsigned int i;
    struct stat st;

	char cwd[PATH_MAX];
	char slash[2] = "/";
	char *router;
	if (getcwd(cwd, sizeof(cwd)) != NULL)
	{
	}
	else
	{
		perror("getcwd() error");
		return 1;
	}


    if (ac < 2)
    {
        printf("Usage: %s path_to_file ...\n", av[0]);
        return (1);
    }
    i = 1;
    while (av[i])
    {
        printf("%s:", av[i]);
		router = _strcat(cwd, slash);
		av[1] = _strcat(cwd, av[1]);

		if (stat(av[i], &st) == 0)
        {
            printf(" FOUND\n");
        }
        else
        {
            printf(" NOT FOUND\n");
        }
        i++;
    }
    return (0);
}
