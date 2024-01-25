#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void update(int *a, int *b)
// {
//     // Complete this function
//     *a += *b;
//     *b -= *a - *b;
// }
int main()
{
    // int numOne = 100;
    // int *numTwo = &numOne;
    // int numThree =numTwo;
    // printf("\nThe address of memory location is : %p\n\n", &numTwo);
    // printf("\n\n%d\n\n", numThree);
    // ============ POINTER TO POINTER ==========
    // int numOne = 10;
    // int *pointerOne = &numOne;
    // int **pointerTwo = &pointerOne;
    // int ***pointerThree = &pointerTwo;
    // int ****pointerFourth = &pointerThree;

    // printf("\n");
    // printf("Pointer one adrress is: %p\n", pointerOne);
    // printf("Pointer two adrress is: %p\n", pointerTwo);
    // printf("Pointer three adrress is: %p\n", pointerThree);
    // printf("Pointer fourth adrress is: %p\n", pointerFourth);

    // =================== POINTER ARITHMATIC ===========
    // int numOne = 200;
    // int *pointerNumOne = &numOne;
    // printf("\n");
    // printf("%p\n", pointerNumOne);
    // pointerNumOne++;
    // printf("\n");
    // printf("%p\n", pointerNumOne);

    // int myArray[5] = {100, 200, 300, 400, 500};
    // int *arrayPointerOne = &myArray[0];
    // printf("\n");
    // printf("The myArray[0] is : %d\n", *arrayPointerOne);
    // arrayPointerOne++;
    // printf("The myArray[1] is : %d\n", *arrayPointerOne);
    // arrayPointerOne++;
    // printf("The myArray[2] is : %d\n", *arrayPointerOne);

    // for(int i=0; i<5; i++){
    //     int *arrayPointerOne = &myArray[i];
    //     printf("The myArray[0] is : %d\n", *arrayPointerOne);
    // }

    // =============== VOID POINTER ==========
    // int numOne = 100;
    // float numTwo = 2.3;
    // void *pointerOne;

    // pointerOne = &numOne;
    // printf("\n");
    // printf("%d\n", *(int*)pointerOne);

    // ============ FUNCTION POINTERS=======
    // int myFunc(int a, int b)
    // {
    //     return a + b;
    // }

    // int (*ptrFunction)(int, int) = &myFunc;
    // printf("%d\n", ptrFunction(2, 300));

    // int functionOne(int numOne, int numTwo){
    //     return (numOne+numTwo)/2;
    // }

    // int (*pointerFunction)(int, int) = &functionOne;
    // printf("\n%d\n", pointerFunction(100, 200));

    // int x=1;
    // int y=2;
    // int z[10];

    // int *ip = &x;
    // y=*ip;
    // *ip=0;
    // ip=&z[0];

    // int numOne=100;
    // int *pointerOne = &numOne;
    // *pointerOne = *pointerOne+300;
    // printf("\n");
    // printf("%d\n", *pointerOne);

    // int numOne=100, numTwo=200;
    // int *addingNumPointer = &numOne;
    // int *addingNumPointerTwo = &numTwo;

    // printf("\n%d\n", *addingNumPointer + *addingNumPointerTwo);

    // =================PRACTICE DAY-2==============
    // int myVar = 100;
    // int *myPointer = &myVar;
    // printf("%d\n", *myPointer);

    // int codeList[5] = {1, 2, 3, 4, 5};
    // int *listPointers = &codeList;
    // printf("%d\n", *listPointers);
    // for(int i=0; i<5; i++){
    //     printf("%d\n", listPointers[i]);
    // }

    // int myArray[3] = {100, 260, 40};
    // // int *arrayPointers[3] = {&myArray[0], &myArray[1], &myArray[2]};
    // int *arrayPointers[3];
    // for (int j = 0; j < 3; j++)
    // {

    //     arrayPointers[j] = &myArray[j];
    // }

    // for (int i = 0; i < 3; i++)
    // {
    //     printf("%d\n", *arrayPointers[i]);
    // }

    // =================PRACTICE DAY-3==============
    // int numOne, numTwo;
    // int *pointerOne = &numOne, *pointerTwo = &numTwo;

    // printf("Please enter 2 integer: ");
    // scanf("%d %d", &numOne, &numTwo);

    // update(pointerOne, pointerTwo);

    // printf("NumOne = %d\n numTwo = %d", numOne, numTwo);

    // 1. Declare a pointer variable and assign a value to it. Print both the variable and its address.
    // int numOne = 10, numTwo = 20;
    // int *pointOne = &numOne;
    // int *pointTwo = &numTwo;
    // printf("PointOne = %d\nPointTwo = %d\n", *pointOne, *pointTwo);
    // printf("PointOne Add = %d\nPointTwo Add = %d\n", pointOne, pointTwo);
    // 2. Swap two variables using pointers.
    // 3. Write a program to find the length of a string using pointers.

    return 0;
}