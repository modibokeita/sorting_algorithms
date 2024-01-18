#include "sort.h"


/**
 * bubble_sort - sorts an array of integers in
 * ascending order using the Bubble sort algorithm
 * @array: Array to be sorted
 * @size: the size of array
 * Return: 0
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	int temp;

	int swap;

	for (i = 0; i < size - 1; i++)
	{
		swap = 0;

		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];

				array[j] = array[j + 1];

				array[j + 1] = temp;
				swap = 1;

				print_array(array, size);
			}
		}
		if (swap == 0)
			break;
	}
}
