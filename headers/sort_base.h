#pragma once

// Constants
#define RED "\x1b[31m"
#define GREEN "\x1b[32m"
#define COLOR_RESET "\x1b[0m"

// Function prototypes
void sort(int*, int);
void swap(int*, int, int);
int *get_int_array(int argc, char **argv);
