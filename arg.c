#include <stdio.h>

/**
 * main - main function
 *
 * return: argument array
 */
int main(int ac, char **av)
{
	int i;
	for (i = 1; av[i] != NULL; i++)
	{
	printf("%s\n", av[i]);
	}
	return (0);
}
