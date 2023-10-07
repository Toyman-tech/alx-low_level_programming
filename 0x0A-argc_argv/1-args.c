#include <stdlib.h>
#include <stdio.h>
int main(int argc, char *argv[])
{
	int count = 0;

	while (argc-- > 1)
		count++;

	(void)(*argv);

	printf("%d\n", count);
	exit(EXIT_SUCCESS);
}
