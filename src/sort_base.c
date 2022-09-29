#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "sort_base.h"

// Function Prototypes

int main(int argc, char **argv)
{
    int *arr = get_int_array(argc, argv);
    if (!arr)
    {
        printf("Program kullanımı:\n./sort num1 num2 ...");
        return EXIT_FAILURE;
    }

    sort(arr, argc - 1);

    int last = INT_MIN;
    char noerror = 1;
    printf(GREEN);
    for (int i = 0; i < argc - 1; i++)
    {
        if (arr[i] < last && noerror)
        {
            noerror = 0;
            printf(RED);
            printf("%d ", arr[i]);
            printf(COLOR_RESET);
        }
        else
        {
            last = arr[i];
            printf("%d ", arr[i]);
        }
    }

    printf("\n" COLOR_RESET);
    return EXIT_SUCCESS;
}

int *get_int_array(int argc, char **argv)
{
    // Check if there is at least 2 number to sort
    if (argc < 3)
    {
        return NULL;
    }

    int *arr = (int *)malloc((argc - 1) * sizeof(int));
    for (int i = 1; i < argc; i++) // argv[0] is the name of the program
    {
        arr[i - 1] = atoi(argv[i]);
    }

    return arr;
}

void swap(int *array, int index1, int index2)
{
    int temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}