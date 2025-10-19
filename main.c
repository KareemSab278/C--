#include "challenges.h"
#include "helperAlgorithms/binarySearchDemo.h"
#include "helperAlgorithms/set.h"
#include <stdio.h>

int main()
{
    // challenges();
    // binarySearchDemo();
    int listOfScores[] = {2, 2, 5, 4, 4, 4, 6, 2, 1, 0, 3, 3, 7, 2};
    int sizeOfListOfScores = sizeof(listOfScores) / sizeof(listOfScores[0]);
    intSet(listOfScores, sizeOfListOfScores );
    return 0;
}