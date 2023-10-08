#include <string.h>
#include "main.h"
#include <stdlib.h>
#include <stdio.h>
int *array_range(int min, int max)
{
	int range, i = 0,  *ptr;

	if (min > max)
		return (NULL);

	range  = max - min;
	ptr = malloc((range + 1) * sizeof(*ptr));

	if (ptr == NULL)
		return (NULL);

	for (range = min; range <= max; range++)
		ptr[i++] = range;
	return (ptr);
}
