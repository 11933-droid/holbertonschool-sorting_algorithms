/**
	* bubble_sort - sort array ascending using Bubble sort
	* @array: pointer to int array
	* @size: number of elements
	*
	* Description: prints the array after each swap.
	*/
#include "sort.h"
static void swap_ints(int *a, int *b)
{
	int t = *a;
	*a = *b;
	*b = t;
}
void bubble_sort(int *array, size_t size)
{
	size_t i, n;
	int swapped;
	if (!array || size < 2)
	return;
	for (n = size; n > 1; n--)
	{
	swapped = 0;
	for (i = 1; i < n; i++)
	{
	    if (array[i - 1] > array[i])
	    {
		swap_ints(&array[i - 1], &array[i]);
		print_array(array, size);
		swapped = 1;
	    }
	}
	if (!swapped)
	    break;
	}
}
