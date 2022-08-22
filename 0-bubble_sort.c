#include "sort.h"

/**
 * bubble_sort - sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: the array of intergers
 * @size: the wsize of the array
 * Return: void
 */

void bubble_sort(int *array, size_t size)
{
	size_t pass, index, temp;

	pass = 0;
	while (pass < size - 1)
	{
		index = 0;
		while (index < size - loop - 1)
		{
			if (array[index] > array[index + 1])
			{
				temp = array[index];
				array[index] = array[index + 1];
				array[index + 1] = temp;
				print_array(array, size);
			}
			index = index + 1;
		}
		pass = pass + 1;
	}
}
