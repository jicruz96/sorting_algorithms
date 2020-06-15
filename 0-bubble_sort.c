#include "sort.h"

/**
 * bubble_sort - sorts int array w/ bubble sort; prints after each swap
 * @array: pointer to int array
 * @size: size of int array
 **/
void bubble_sort(int *array, size_t size)
{
	int tmp = 0;
	size_t i = 0, unsorted_nums = size - 1;

	if (array == NULL || size < 2)
		return;

	for (; unsorted_nums; unsorted_nums--)
		for (i = 0; i < size - 1; i++)
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
}
