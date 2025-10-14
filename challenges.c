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

void challenges()
{
    int size = 10; // size for the arr (mind fuck)
    int *output = malloc(sizeof(int) * size); // assigning size for the array on heap
    // push returnFibNumbers to the output array
    printf("the output for the fib series: ");
    for (int i = 0; i < 9; i++)
    {
        output[i] = returnFibNumbers(i);
        printf("%d", output[i]);
        printf(", ");
    }
    
    // printf the output array

    // free memory
    free(output);
}

int returnFibNumbers(int maxNum)
{

    // The Fibonacci equation is defined by the recurrence relation Fn​=Fn−1​+Fn−2​ for n>1, with initial conditions F0​=0 and F1​=1.
    // This means each number in the Fibonacci sequence is the sum of the two preceding numbers.

    if (maxNum == 0) return 0;
    if (maxNum == 1) return 1;
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