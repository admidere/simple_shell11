#include <stdio.h>
#include <unistd.h>

int main(void)
{
      char *argv[] = {"/bin/ls", "-l", NULL};
      int value = execve(argv[0], argv, NULL);
      if (value == -1)
	      perror("error");
      printf("done with excve\n");

      return (0);
}


