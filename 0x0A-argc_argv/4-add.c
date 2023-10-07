#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{
	int i, j, result = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				exit(EXIT_FAILURE);
			}
		}
		result += atoi(argv[i]);
	}
	printf("%d\n", result);
	exit(EXIT_SUCCESS);
}
