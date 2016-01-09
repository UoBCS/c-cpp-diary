/*
 * alg - Collection of algorithms
 *
 * Ossama Edbali <ossedb@gmail.com>
 * MIT License 2016
 *
 */

#include "alg.h"

int binary_search(const int *arr, int n, int val)
{
    int low = 0, high = n - 1, mid;

    while (low <= high)
    {
	mid = (low + high) / 2;
	if (arr[mid] > val)
	    high = mid - 1;
	else if (arr[mid] < val)
	    low = mid + 1;
	else
	    return mid;
    }

    return -1;
}
