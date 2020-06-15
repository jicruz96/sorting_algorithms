#include "sort.h"

/**
 * bubble_sort - sorts int array w/ bubble sort; prints array after each step
 * @array: pointer to array of integers
 * @size: size of array
 * Return: void
 **/
void bubble_sort(int *array, size_t size)
{
	int *curr, *next, *reset, tmp;
	size_t i;

	if (size < 2)
	{
		print_array(array, size);
		return;
	}

	curr = array;
	next = array + 1;
	reset = next;

	while (next != array + size)
	{
		if (*curr >= *next)
		{
			tmp = *curr;
			*curr = *next;
			*next = tmp;
			print_array(array, size);
			curr++;
			next++;
		}
		else
		{
			curr = reset;
			next = reset + 1;
			reset++;
		}
	}

	for (i = 0; i < size - 1; i++)
	{
		if (array[i] > array[i + 1])
			bubble_sort(array, size);
	}
}
