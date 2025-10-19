#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include "qsort.h"

int listOfScores[] = {2, 2, 5, 4, 4, 4, 6, 2, 1, 0, 3, 3, 7, 2};
int sizeOfListOfScores = sizeof(listOfScores) / sizeof(listOfScores[0]);

void intSet(int input[], int inputLen)
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