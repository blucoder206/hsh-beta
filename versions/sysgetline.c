#include <stdio.h>

int main(void)
{
/**    char buffer[0]; **/
	char *b = NULL;
	size_t bufsize = 16;
	size_t chars;

	printf("$ ");
	chars = getline(&b, &bufsize, stdin);
	printf("%s", b);
    printf("%zu", chars);
	return(0);
}
