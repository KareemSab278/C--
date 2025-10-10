#include <stdio.h>
#include <stdbool.h>

void flipInts(); void factorial(int num);
void isEvenOrOdd(int number);
void largestNumber(int numberOfElems, int numbers[numberOfElems]);

void challenges()
{
    factorial(5);
}

void factorial(int num){
    printf("factorial of %d:", num);
    int output = 1;
    while (num != 0){
        output *= num;
        num--;
    }
    printf(" %d", output);
}

void largestNumber(int numberOfElems, int numbers[numberOfElems]){
    // i could use recursion to return largest num but meh
    int output = 0;
    for (int i = 0; i < numberOfElems; i++)
    {
        while (output < numbers[i]){ output = numbers[i]; }
    }
    printf("output: %d", output);
}

void isEvenOrOdd(int number) {if (number % 2 == 0) {printf("even");} else { printf("odd"); }}

void flipInts()
{
    int x = 1, y = 2;
    int tmpY = y;
    printf("x was %d and y was %d\n", x, y);
    y = x;
    x = tmpY;
    printf("x is now %d and y is now %d\n", x, y);
}