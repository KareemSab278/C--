#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>

// PRINT
void intPrint(int input[], int inputLen)
{
    for (int i = 0; i < inputLen; i++)
    {
        printf("%d", input[i]);
        if (i != inputLen - 1)
            printf(", ");
    }
    printf("\n");
}

void charPrint(char input[], int inputLen, bool split)
{
    if (split)
    {
        for (int i = 0; i < inputLen; i++)
        {
            printf("%c", input[i]);
            if (i != inputLen - 1)
                printf(", ");
        }
    }
    else
    {
        for (int i = 0; i < inputLen; i++)
        {
            printf("%c", input[i]);
        }
    }
}
// test case:
// char word[] = {'h', 'e', 'l', 'l', 'o'};
// int wordLen = sizeof(word) / sizeof(word[0]);
// charPrint(word, wordLen, false); // Expected: hello

// SET
int set(int input[], int inputLen, int outputSet[])
{
    int outputLen = 0;
    for (int i = 0; i < inputLen; i++)
    {
        int isUnique = 1;
        for (int j = 0; j < outputLen; j++)
        {
            if (outputSet[j] == input[i])
            {
                isUnique = 0;
                break;
            }
        }
        if (isUnique)
        {
            outputSet[outputLen++] = input[i];
        }
    }
    return outputLen;
}
// use case:
// int arr[] = {1, 2, 2, 3, 4, 4, 4, 5, 5};
// int arrLen = sizeof(arr) / sizeof(arr[0]);
// int sortedArr[arrLen];
// int uniqueLen = set(arr, arrLen, sortedArr);
// intPrint(sortedArr, uniqueLen);

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

typedef struct Node
{
    int data;
    struct Node *next; // i dont think this takes any data but if im wrong then it is 4 bytes...
} Node;

void IntLinkedList()
{
    // assign it its data and then point to next node
    Node nodeRoot; // basically like saying nodeRoot = new Node i think
    nodeRoot.data = 1;
    nodeRoot.next = malloc(sizeof(Node)); // assigning 4 bytes lol
    nodeRoot.next->data = 2;
    nodeRoot.next->next = NULL; // end of linked list

    printf("Linked list test: ");
    printf("%d ", nodeRoot.data);
    printf("%d\n", nodeRoot.next->data);
    free(nodeRoot.next);
}
