#include <stdio.h>
#include <assert.h>

int binary_search_recursive (int * array, int search, int initial, int final)
{
    if (initial >= final)
        return -1;

    int mid;
    mid = (final - initial) / 2;
    if (array[mid] == search)
        return mid;

    if (search > array[mid])
    {
        return binary_search_recursive(array, search, mid, final);
    }

    return  binary_search_recursive(array, search, initial, mid);
} 

int main ()
{
    int array[1000];
    for (int i = 0; i <1000 ; ++i) {
        array[i] = 2*i + 1;
    }

    assert( binary_search_recursive(array, 2, 0, 999) == -1);
    assert( binary_search_recursive(array, 3, 0, 999) == 1);
    assert( binary_search_recursive(array, 30000, 0, 999) == -1);
}