#include "sort.h"

/**
 * quick_sort - sorts int array w/ quick sort, prints each swap
 * @array: pointer to array
 * @size: size of array
 **/
void quick_sort(int *array, size_t size)
{
	int *pivot, *low, *high, tmp;
	size_t i;
	static int first_call = 1;
	static size_t len;

	if (!array)
		return;
	if (first_call)
	{
		len = size;
		first_call = 0;
	}
	pivot = array + size - 1;
	high = array;
	low = NULL;
	while (low != pivot)
	{
		for (; high != pivot && *high < *pivot; high++)
			;

		if (high == pivot)
		{
			quick_sort(array, size - 1);
			return;
		}

		for (low = pivot; low != high && *low >= *pivot; low--)
			;

		if (low == high)
			low = pivot;

		tmp = *low;
		*low = *high;
		*high = tmp;
		print_array(array, len);
	}
	for (i = 0; i < size - 1; i++)
		if (array[i] > array[i + 1])
			quick_sort(array, size);
}
