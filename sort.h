#ifndef SORT_H
#define SORT_H

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

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

/** Bubble sort*/
void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);
/** print array function*/
void print_array(const int *array, size_t size);
listint_t *swap_node(listint_t *node, listint_t **list);
void swap(int *a, int *b);
int lomuto_partition(int *array, int low, int high, size_t size);
void quicksort_recursive(int *array, int low, int high, size_t size);
void shell_sort(int *array, size_t size);
void cocktail_sort_list(listint_t **list);
void counting_sort(int *array, size_t size);
void merge_sort(int *array, size_t size);
void heap_sort(int *array, size_t size);
void radix_sort(int *array, size_t size);
void bitonic_sort(int *array, size_t size);
void quick_sort_hoare(int *array, size_t size);
/** print list*/
void print_list(const listint_t *list);

#endif
