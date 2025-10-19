// https://www.geeksforgeeks.org/c/c-exercises/
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

void flipInts();
void factorial(int num);
void isEvenOrOdd(int number);
void largestNumber(int numberOfElems, int numbers[numberOfElems]);
int convertBinaryToInt(char binary[]);
int returnFibNumbers(int maxNum);
void do_a_flip(int arr[], int moves, int arrLen);
void findMaxAndMinInArr(int input[], int inputLength);
// int arrSizeOf(int input[]);
int compareInts(const void *a, const void *b);
void sortIntArr(int input[], int inputLen);

void challenges()
{
    int arr[] = {4, 7, 2, 1, 9};
    int arrLen = sizeof(arr) / sizeof(arr[0]);

    sortIntArr(arr, arrLen);
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d", arr[i]);
    }
    
}

// int arrSizeOf(int input[])
// {
//     return sizeof(input) / sizeof(input[0]);
// }

int compareInts(const void *a, const void *b)
{
    int intA = *(const int *)a;
    int intB = *(const int *)b;
    return (intA > intB) - (intA < intB);
}

// sort using qsort
void sortIntArr(int input[], int inputLen)
{
    qsort(input, inputLen, sizeof(int), compareInts);
}

// example input: arr[] = {4, 7, 2, 1, 9};
void findMaxAndMinInArr(int input[], int inputLength)
{
    int min = input[0];
    int max = input[0];
    for (int i = 0; i < inputLength; i++)
    {
        if (input[i] > max)
        {
            max = input[i];
        }
        if (input[i] < min)
        {
            min = input[i];
        }
    }
    printf("min: %d \nmax: %d", min, max);
}

void do_a_flip(int arr[], int moves, int arrLen)
{
    int tempNums[moves]; // this is fine.
                         // int = 4 bytes
    for (int i = 0; i < moves; i++)
    {
        tempNums[i] = arr[i];
    }
    for (int i = 0; i < arrLen - moves; i++)
    {
        arr[i] = arr[i + moves];
    }
    for (int i = 0; i < moves; i++)
    {
        arr[arrLen - moves + i] = tempNums[i];
    }
    for (int i = 0; i < arrLen; i++)
    {
        printf("%d, ", arr[i]);
    }
    printf("\n");
}

int returnFibNumbers(int maxNum)
{

    // The Fibonacci equation is defined by the recurrence relation Fn​=Fn−1​+Fn−2​ for n>1, with initial conditions F0​=0 and F1​=1.
    // This means each number in the Fibonacci sequence is the sum of the two preceding numbers.

    if (maxNum == 0)
        return 0;
    if (maxNum == 1)
        return 1;
    return returnFibNumbers(maxNum - 1) + returnFibNumbers(maxNum - 2);
}

int convertBinaryToInt(char binary[])
{
    int output = 0, i = 0, loopSize = strlen(binary);

    for (int i = 0; i < loopSize; i++)
    {
        output += pow((binary[i] - '0'), 2) * i;
    }
    return output;
}

void factorial(int num)
{
    printf("factorial of %d:", num);
    int output = 1;
    while (num != 0)
    {
        output *= num;
        num--;
    }
    printf(" %d", output);
}

void largestNumber(int numberOfElems, int numbers[numberOfElems])
{
    // i could use recursion to return largest num but meh
    int output = 0;
    for (int i = 0; i < numberOfElems; i++)
    {
        while (output < numbers[i])
        {
            output = numbers[i];
        }
    }
    printf("output: %d", output);
}

void isEvenOrOdd(int number)
{
    if (number % 2 == 0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }
}

void flipInts()
{
    int x = 1, y = 2;
    int tmpY = y;
    printf("x was %d and y was %d\n", x, y);
    y = x;
    x = tmpY;
    printf("x is now %d and y is now %d\n", x, y);
}