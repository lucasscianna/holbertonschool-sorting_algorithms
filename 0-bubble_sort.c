#include <stdio.h>
#include "sort.h"
/**
 * bubble_sort - Sorts an array of integers in ascending order
 * using the Bubble sort algorithm
 * @array: pointer to the array of integers to sort
 * @size: size of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j, k;
	int temp;

	if (array == NULL || size < 2)
	{
		return;
	}
	for (i = 0; i < size - 1; i++)
	{
		for (j = 0; j < size - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				temp = array[j];
				array[j] = array[j + 1];
				array[j + 1] = temp;
				for (k = 0; k < size; k++)
				{
					if (k > 0)
					{
						printf(", ");
					}
					printf("%d", array[k]);
				}
				printf("\n");
			}
		}
	}
}
