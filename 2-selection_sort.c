#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order
 * using the Selection sort algorithm
 * @array: the array of integers
 * @size: the size of the array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	unsigned int index, next_idx, min_idx, temp;

	if (array == NULL)
		return;

	index = 0;
	while (index < size - 1)
	{
		min_idx = index;

		next_idx = index + 1;
		while (next_idx < size)
		{
			if (array[next_idx] < array[min_idx])
				min_idx = next_idx;
			next_idx = next_idx + 1;
		}
		if (array[index] != array[min_idx])
		{
			temp = array[index];
			array[index] = array[min_idx];
			array[min_idx] = temp;
			print_array(array, size);
		}
		index = index + 1;
	}
}
