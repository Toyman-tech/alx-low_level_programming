#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	if (argc < 3)
		printf("Error\n");
	else
		printf("%i\n", atoi(argv[1]) * atoi(argv[2]));

	exit(EXIT_SUCCESS);
}
