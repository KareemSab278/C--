#include <stdio.h>

void flipInts();

void challenges()
{
    printf("This is the challenges function.\n");
    flipInts();
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