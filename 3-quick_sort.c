#include "sort.h"
/**
 * quick_sort - Sorts an array of integers in ascending order
 *              using the Quick sort algorithm
 * @array: pointer to the array of integers to sort
 * @size: number of elements in the array
 */
void quick_sort(int *array, size_t size)
{
	int pivot, tmp;
	size_t i, j, p;

	if (array == NULL || size < 2)
		return;
	pivot = array[size - 1];
	i = 0;
	for (j = 0; j < size - 1; j++)
	{
		if (array[j] < pivot)
		{
			if (i != j)
			{
				tmp = array[i];
				array[i] = array[j];
				array[j] = tmp;
				print_array(array, size);
			}
			i++;
		}
	}
	if (i != size - 1)
	{
		tmp = array[i];
		array[i] = array[size - 1];
		array[size - 1] = tmp;
		print_array(array, size);
	}
	p = i;
	quick_sort(array, p);
	if (p + 1 < size)
		quick_sort(array + p + 1, size - p - 1);
}
