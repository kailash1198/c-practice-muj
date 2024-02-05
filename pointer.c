#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ====== pointer passing in function parameter ======
// int myFunc(int *numOneArray, int size)
// {
//     int sum = 0;
//     for (int i = 0; i < size; i++)
//     {
//         sum += numOneArray[i];
//     }
//     return sum;
// }

// void printArray(int *ptr, int size)
// {
//     for (int i = 0; i < size; i++)
//     {
//         printf("%d\n", ptr[i]);
//     }
// }

// void update(int *a, int *b)
// {
//     // Complete this function
//     *a += *b;
//     *b -= *a - *b;
// }

// void jointStr(char *str1, char *str2)
// {
// str1 = (char *)malloc(20 * sizeof(char));
// str2 = (char *)malloc(20 * sizeof(char));
// printf("Enter first Name: ");
// scanf("%s", str1);
// char fullName[20];
// strcpy(fullName, str2);
// strcat(fullName, str1);
// return fullName[20];
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

    // Write a program to implement a simple memory allocator.
    // int *ptr;
    // ptr = (int *)malloc(1 * sizeof(int));
    // *ptr = 500;
    // printf("The ptr is = %d\n", *ptr);
    // free(ptr);

    // Implement a function to concatenate two strings dynamically.
    // jointStr();

    // ======= Pointer of Arrays ========

    // printf("Array pointer [0] = %ld\n", *arrayPointer[0]);

    // printf("Array pointer[0]\n", arrayPointer);
    // printf("Array pointer[1]\n", arrayPointer);

    // int *ptr[2];
    // for(int i=0; i<2; i++){
    //     scanf("%ld\n", &ptr[i]);
    // }
    // for(int j=0; j<2; j++){
    //     printf("The number is = %ld\n", *ptr[j]);
    // }

    // int numOne=10,numTwo=20;
    // int *ptrArray[2];
    // ptrArray[0] = &numOne;
    // ptrArray[1] = &numTwo;

    // printf("ptrArray[0] = %d\n", *ptrArray[0]);
    // printf("ptrArray[1] = %d\n", *ptrArray[1]);

    // int myArray[] = {100, 20, 303, 4423, 564};
    // int *ptr;
    // ptr = myArray;

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", ptr[i]);
    // }
    // int myArray[] = {100, 245, 32,434, 5323};
    // printArray(myArray, 5);

    // ====== pointer passing in function parameter ======
    // int myArray[] = {16660, 270, 380, 40, 500};
    // printf("Sum of the array element = %d\n",  myFunc(myArray, 5));

    // =========== pointers of structure =========
    
    // struct pointerStruct
    // {
    //     char *userName;
    //     char *firstName;
    //     int classCode;
    //     int rollNum;
    //     int marks;
    //     int results;
    // };

    // struct pointerStruct stuctVarOne;
    // char myName[20] = "Kailash Kumar";
    // stuctVarOne.userName = myName;
    // printf("Username = %s\n\n",stuctVarOne.userName);

    // stuctVarOne.firstName = "Aryan singh";
    // printf("first name without pointer var = %s\n",stuctVarOne.firstName);

    return 0;
}
