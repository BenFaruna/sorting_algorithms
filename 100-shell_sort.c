#include "sort.h"

/**
 * shell_sort - sort using shell sort algorithm and knuth sequence
 *
 * @array: array to be sorted
 * @size: size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, gap;
	int temp;

	gap = 1;
	while (gap < size)
	{
		gap = gap * 3 + 1;
	}
	gap = (gap - 1) / 3;

	while (gap != 0)
	{
		for (i = gap; i < size; i++)
		{
			for (j = i; j >= gap; j = j - gap)
			{
				if (array[j] < array[j - gap])
				{
					temp = array[j];
					array[j] = array[j - gap];
					array[j - gap] = temp;
				}
			}
		}
		gap = (gap - 1) / 3;
		print_array(array, size);
	}
}

