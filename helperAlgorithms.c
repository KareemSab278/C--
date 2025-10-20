#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>


// SET
void set(int input[], int inputLen)
{
    int output[inputLen];
    int outputLen = 0;

    for (int i = 0; i < inputLen; i++)
    {
        int isUnique = true;
        for (int j = 0; j < outputLen; j++)
        {
            if (output[j] == input[i])
            {
                isUnique = false;
                break;
            }
        }
        if (isUnique)
        {
            output[outputLen++] = input[i];
        }
    }

    for (int i = 0; i < outputLen; i++)
    {
        printf("%d, ", output[i]);
    }
    printf("\n");
}


// SORT INTS
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


// SORT CHARS
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


// BINARY SEARCH
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
    return -1;
}