#include "sort.h"

/**
 * swap - for swapping the values of array indexes
 *
 * @a: first position
 * @b: second position
 */
void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * quick_sort - sort using quick sort algorithm and lomuto partitioning
 *
 * @array: array to be sorted
 * @size: number of elements in the array
 *
 * Return: Nothing
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
		quicksort(array, size, 0, size - 1);
}

/**
 * quicksort - function that contains logic for sorting
 *
 * @array: array to be sorted
 * @size: size of the array
 * @lo: lower boundary to be sorted
 * @hi: higher boundary for sorting
 */
void quicksort(int *array, size_t size, int lo, int hi)
{
	int p;

	if (lo >= hi)
		return;

	print_array(array, size);
	p = partition(array, lo, hi);
	quicksort(array, size, lo, p - 1); /* left side of the pivot */
	quicksort(array, size, p + 1, hi); /* right side of the pivot */
}

/**
 * partition - function used to create sublists of the array
 *
 * @array: array for sublists to be created from
 * @lo: lower boundary of sublist
 * @hi: higher boundary of sublist
 *
 * Return: the new pivot index
 */
size_t partition(int *array, int lo, int hi)
{
	int j;
	int pivot = array[hi]; /* choosing last element as pivot */
	int i = lo - 1; /* temporary pivot index */

	for (j = lo; j < hi; j++)
	{
		if (array[j] < pivot)
		{
			i++;
			swap(&array[i], &array[j]);
		}
	}
	i++;
	swap(&array[i], &array[j]);
	return (i);
}

