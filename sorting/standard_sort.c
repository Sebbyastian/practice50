#include <cs50.h>
#include <stdio.h>
// XXX: Use your research skills to find the standard header file for the ISO/POSIx C `qsort` function, and include it here.

int int_compare(void const *x, void const *y);
// XXX: write `int_compare` function that compares `int` pointed at by `x` to `int` pointed at by `y`
//      `int_compare` should return -1 when the first argument is less than the second, 1 when greater or 0 when equal
//      (e.g. kinda like `memcmp` and `strcmp`)

int main (void)
{
    // take in array size and elements from user
    printf("please enter array size: ");
    int n = get_int();
    int array[n];
    printf("please enter %i elements, to fill array: \n", n);
    for(int i = 0; i < n; i++)
    {
        array[i] = get_int();
    }
    
    // print unsorted array
    printf("unsorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
    
    qsort(array, n, sizeof *array, int_compare);
    printf("sorted array is: \n");
    for(int i = 0; i < n; i++)
    {
        printf("%i ", array[i]);
    }
    printf("\n");
}

// buggy implementation of int comparer
int int_compare(void const *x, void const *y)
{    
    int const *X = x;
    int const *Y = y;
    // XXX: Compare `*X` to `*Y` and return -1, 0 or 1 as described above
}
