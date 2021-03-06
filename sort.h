#ifndef SORT_H
#define SORT_H
/* standard library functions */
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

/* data structure */
/**
 * struct listint_s - Doubly linked list node
 *
 * @n: Integer stored in the node
 * @prev: Pointer to the previous element of the list
 * @next: Pointer to the next element of the list
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

/* print functions */
void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void quick_aux(int *array, size_t size, size_t low, size_t high);
void top_down_merge(int *array, int *copy, size_t low, size_t high);
void counting_sort_radix(int *array, size_t size, long int e);
void bitonic_merge(int *array, size_t low, size_t s, int dir);
void bitonic_recursion(int *array, size_t size, size_t low, size_t s, int dir);

/* sort functions */
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);

/* help functions */
void swap(int *a, int *b);
size_t partition(int *array, int lo, int hi);
void quicksort(int *array, size_t size, int lo, int hi);
void quick_aux(int *array, size_t size, size_t low, size_t high);

#endif /* SORT_H */
