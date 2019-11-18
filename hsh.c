#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
/**
* main - super simple shell
*
* Return: nothig
**/
int main(void)
{
for (;;)
{
	ssize_t readed_bytes;
	size_t numberbytes;
	char *string;
	const char s[2] = " \n";
	char **argv;
	char *token;
	int tahv;
	pid_t child_pid;
	int status;

	numberbytes = 0;
	string = NULL;
	printf("$ ");
	readed_bytes = getline(&string, &numberbytes, stdin);

	argv = malloc(readed_bytes * sizeof(*argv));

	if (readed_bytes == -1)
	{
		printf("Error");
	}
	else
	{
		tahv = 0;
		token = strtok(string, s);
		while (token)
		{
			argv[tahv++] = token;
			token = strtok(NULL, s);
		}
		argv[tahv] = 0;


		child_pid = fork();
		if (child_pid == 0)
		{
			if (execve(argv[0], argv, NULL) == -1)
			{
				 printf("Error");
			}
		}
		else
		{
			wait(&status);
		}
	}
	free(string);
	free(argv);

}
	return (0);
}
