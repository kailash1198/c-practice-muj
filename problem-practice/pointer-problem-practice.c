#include <stdio.h>
#include <stdlib.h>
// Write a function to find the largest element in an array using pointers.
int findLargestNum(int *myArray[], int size)
{
    int temp=0;
    for (int i = 0; i < size; i++)
    {
        if (myArray[i] > myArray[i + 1])
        {
            temp = myArray[i];
        }
    }
    return temp;
}

int main()
{
    int array[5] = {10, 20, 30, 40, 50};
    int num = findLargestNum(&array, 5);
    printf("The num is = %d\n", num);

    return 0;
}