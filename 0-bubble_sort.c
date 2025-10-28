#include "sort.h"

/**
 * bubble_sort - sort an array of integers in ascending order (Bubble sort)
 * @array: pointer to int array
 * @size: number of elements in @array
 *
 * Description:
 * - If array is NULL or size < 2, do nothing.
 * - Print the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int swapped;

	if (!array || size < 2)
		return;

	n = size;
	do {
		swapped = 0;
		for (i = 0; i + 1 < n; i++)
		{
			if (array[i] > array[i + 1])
			{
				int tmp = array[i];

				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
				swapped = 1;
			}
		}
		if (n > 0)
			n--;
	} while (swapped);
}
