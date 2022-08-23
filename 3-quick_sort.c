#include "sort.h"

/**
 * partition - define and sort the sub-arrays
 * @array: Sub-array of int to be sorted
 * @size: Size of the sub-array
 * @lo: lower boundary of sub-array
 * @hi: upper boundary of sub-array
 * Return: The index where the array is split
 */
size_t partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	ssize_t index = lo;

	while (index < hi)
	{
		if (array[index] < array[hi])
		{
			if (lo != index)
			{
				array[lo] ^= array[index];
				array[index] ^= array[lo];
				array[lo] ^= array[index];
				print_array(array, size);
			}
			lo += 1;
		}
		index += 1;
	}
	if (array[lo] != array[hi])
	{
		array[lo] ^= array[hi];
		array[hi] ^= array[lo];
		array[lo] ^= array[hi];
		print_array(array, size);
	}
	return (lo);
}

/**
 * sort - Get the sub-arrays
 * @array: Array of int to sort
 * @size: Size of the array
 * @lo: lower bound of array
 * @hi: upper bound of array
 */

void sort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	ssize_t p;

	if (lo < hi)
	{
		p = partition(array, size, lo, hi);
		sort(array, size, lo, p - 1);
		sort(array, size, p + 1, hi);
	}
}

/**
 * quick_sort - Sort an array of int in ascending order
 * using the QuickSort algorithm
 * @array: Array of integers to sort
 * @size: Size of the array
 */
void quick_sort(int *array, size_t size)
{
	if (size < 2)
		return;
	if (array && size)
		sort(array, size, 0, size - 1);
}
