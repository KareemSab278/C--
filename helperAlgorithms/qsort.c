#include <stdlib.h>
#include <stdio.h>

int compareInts(const void *a, const void *b);
int compareChars(const void *a, const void *b);
void sortInts(int input[], int inputLen);
void sortChars(char input[], int inputLen);

void qsortDemo()
{
    int arr[] = {4, 7, 2, 1, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);
    sortInts(arr, arrLen);

    char carr[] = {'d', 'a', 'c', 'b', 'e'};
    int carrLen = sizeof(carr) / sizeof(carr[0]);
    sortChars(carr, carrLen);
}

int compareInts(const void *a, const void *b)
{
    int intA = *(const int *)a;
    int intB = *(const int *)b;
    return (intA > intB) - (intA < intB);
}
void sortInts(int input[], int inputLen)
{
    qsort(input, inputLen, sizeof(int), compareInts);
}

int compareChars(const void *a, const void *b)
{
    char charA = *(const char *)a;
    char charB = *(const char *)b;
    return (charA > charB) - (charA < charB);
}
void sortChars(char input[], int inputLen)
{
    qsort(input, inputLen, sizeof(char), compareChars);
}