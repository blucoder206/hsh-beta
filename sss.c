#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (void)
{
    ssize_t readed_bytes;
    size_t numberbytes;
    char *string;
    const char s[2] = " \n";
    char *token;
    int tahv;

    numberbytes = 0;
    string = NULL;

    printf("$ ");

    readed_bytes = getline(&string, &numberbytes, stdin);
    char *argv[4];
    if (readed_bytes == -1)
    {
        printf("Error");
    }
    else
    {
		tahv = 0;
        token = strtok(string, s);
        while(token)
        {
            argv[tahv++] = token;
            token = strtok(NULL, s);
		}
		argv[3] = 0;
		if (execve(argv[0], argv, NULL) == -1)
		{
			perror("Error: \n");
		}
	}
    free(string);
    return (0);
}
