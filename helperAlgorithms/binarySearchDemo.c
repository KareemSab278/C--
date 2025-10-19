#include <stdlib.h>
#include <stdio.h>
#include "qsort.h"
// need to create a set here for convinence later on. also challenge 16
// a set takes in an arr and returns an arr of unique elems.
int binaryIntSearch(int input[], int target, int inputLength);
void binarySearchDemo();

void binarySearchDemo()
{

    int arr[] = {4, 7, 2, 1, 9};
    int target = 7;
    int inputLength = sizeof(arr) / sizeof(arr[0]);
    int position = binaryIntSearch(arr, target, inputLength);
    printf("target found at position: %d\n", position);
    printf("elem in position %d is %d", position, arr[position]);
}

int binaryIntSearch(int input[], int target, int inputLength)
{
    int midwayPoint = inputLength / 2;
    sortInts(input, inputLength);

    int low = 0;
    int high = inputLength - 1;

    while (low <= high)
    {
        int midwayPoint = (low + high) / 2;
        if (input[midwayPoint] == target)
        {
            return midwayPoint;
        }
        else if (input[midwayPoint] > target)
        {
            high = midwayPoint - 1;
        }
        else
        {
            low = midwayPoint + 1;
        }
    }
    return -1; // not found
}
