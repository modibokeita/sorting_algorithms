#include "sort.h"

/**
 * selection_sort - sorts an array of
 * integers in ascending order
 * @array: array to be sorted
 * @size: size of array
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;
	quicksort_recursive(array, 0, size - 1, size);
}

/**
 * quicksort_recursive - Recursive helper function for quick sort
 *
 * @array: Pointer to the array to be sorted
 * @low: Low index of the partition
 * @high: High index of the partition
 * @size: Size of the array
 */
void quicksort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = lomuto_partition(array, low, high, size);

		quicksort_recursive(array, low, pivot - 1, size);
		quicksort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * lomuto_partition - Lomuto partition scheme for quick sort
 *
 * @array: Pointer to the array to be sorted
 * @low: Low index of the partition
 * @high: High index of the partition
 * @size: Size of the array
 *
 * Return: Index of the pivot after partitioning
 */
int lomuto_partition(int *array, int low, int high, size_t size)
{
	int pivot = array[high];
	int j, i = low - 1;

	for (j = low; j <= high - 1; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
			print_array(array, size);
		}
	}
	swap(&array[i + 1], &array[high]);
	print_array(array, size);

	return (i + 1);
}

/**
 * swap - Swaps two elements in an array
 *
 * @a: Pointer to the first element
 * @b: Pointer to the second element
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
