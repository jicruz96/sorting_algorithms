#include "sort.h"

/**
 * selection_sort - sorts int array w/ selection sort, prints each step
 * @array: pointer to array
 * @size: array size
 **/
void selection_sort(int *array, size_t size)
{
	size_t i, j, tmp;
	int *min;

	if (array == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		min = array + i;

		for (j = i + 1; j < size; j++)
			if (*min > array[j])
				min = array + j;

		if (min != array + i)
		{
			tmp = array[i];
			array[i] = *min;
			*min = tmp;
			print_array(array, size);
		}
	}
}
