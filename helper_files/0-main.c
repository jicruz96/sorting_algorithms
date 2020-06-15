#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {2, 1, 23, 7, 95, 100, 21, 755, 22, 0, -9, 6};
    size_t n = sizeof(array) / sizeof(array[0]);

    printf("n: %d\n", (int)n);

    print_array(array, n);
    printf("\n");
    bubble_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}
