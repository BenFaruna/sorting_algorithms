#include "sort.h"

/**
 * selection_sort - sorting an array using selection sort algorithm
 *
 * @array: array to be sorted
 * @size: number of elements in the array
 *
 * Return: nothing
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int temp = 0;

	for (i = 0; i < size; i++)
	{
		for (j = i; j < size; j++)
		{
			if (array[j] < array[i])
			{
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
		print_array(array, size);
	}
}

