#include <stdio.h>

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



    return 0;
}