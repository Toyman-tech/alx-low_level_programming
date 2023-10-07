#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc--)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	exit(EXIT_SUCCESS);
}
