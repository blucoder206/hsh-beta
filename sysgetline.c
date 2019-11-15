#include <stdio.h>

int main(void)
{
	char buffer[0];
	char *b = buffer;
	size_t bufsize = 32;
	size_t chars;

	printf("$ ");
	chars = getline(&b, &bufsize, stdin);
	printf("%s", buffer);
	return(0);
}
