#include <stdio.h>
#include <string.h>

/**
 * main -main function
 *
 * return: 0
 */

int main(void)
{
	char str[] = "string are modified and broken into smaller strings";
        char *delim = " ";
	char *split = strtok(str, delim);
	while (split)
	{
		printf("%s\n", split);
		split = strtok(NULL, delim);
	}
	return (0);
}

