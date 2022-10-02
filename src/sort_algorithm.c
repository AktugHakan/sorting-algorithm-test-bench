#include "sort_base.h"
#include <stdio.h>

// swap(array, index1, index2) will swap the elements in the index
// it is already implemented, you can use it directly

void sort(int *unsorted, int length)
{
    int min;
       int mindex;
       for (int i = 0; i < length - 1; i++)
       {
           min = unsorted[i];
           mindex = i;
           for (int j = i+1; j < length; j++)
           {
               if (unsorted[j] < min)
               {
                   min = unsorted[j];
                   mindex = j;
               }
           }

           swap(unsorted, mindex, i);
       }
}
