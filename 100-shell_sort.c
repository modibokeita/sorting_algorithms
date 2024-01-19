#include "sort.h"

/**
 * shell_sort - sorts an array of
 * integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void shell_sort(int *array, size_t size)
{
	unsigned int gap, i, j;

	int temp;

	if (array == NULL)
		return;

	if (size < 2)
		return;

	for (gap = 1; gap < size / 3; gap = gap * 3 + 1)
		;
	for (; gap > 0; gap /= 3)
	{
		for (i = gap; i < size; i++)
		{
			temp = array[i];
			j = i;

			for (; j >= gap && array[j - gap] > temp; j -= gap)
				array[j] = array[j - gap];

			 array[j] = temp;
		}
		print_array(array, size);
	}
}
