#include <stdio.h>
#include <stdlib.h> //memory management
#include <string.h>

int main()
{
    // char userName[20] = "Kailash Kumar";
    // char *userIntrodution;

    // userIntrodution = calloc(200, sizeof(char));
    // printf("Please enter your introdunction: ");
    // if (userIntrodution == NULL)
    // {
    //     printf("Error\n");
    // }
    // else
    // {
    //     fgets(userIntrodution, sizeof(userIntrodution), stdin);
    // }
    // printf("\n%s\n", userIntrodution);

    // char myName[20] = "Kailash Kumar";
    // printf("%s\n", myName);
    // int sizeCheck = sizeof(myName);
    // printf("size of string myName: %d\n", sizeCheck);

    // char *aboutUser;
    // sizeCheck = sizeof(aboutUser);
    // printf("\nsize before calloc : %d\n", sizeCheck);

    // aboutUser = calloc(200, sizeof(char));
    // sizeCheck = sizeof(aboutUser);
    // printf("\nafter calloc call then size is: %d\n", sizeCheck);
    // if (aboutUser == NULL)
    // {
    //     fprintf(stderr, "Error found");
    // }
    // else
    // {
    //     strcpy(aboutUser, "hhjedf jwhef whjwehf wjehfdjwe jhfwe jwefhewj k jhfejw jkwehfjwe wehfjwe fjw fwje fuewf uewifewuhfue uweh fuiweif uweif");
    // }
    // printf("\n%s\n", aboutUser);

    // char firstName[10] = "Kailash";
    // char *secondName;
    // secondName = malloc(20);
    // strcpy(secondName, "Kumar");
    // strncat(secondName, "This is extra text after realloc call", 30);
    // printf("\nFirst Name: %s\nSecond Name: %s\n", firstName, secondName);

    // int numOne = 10;
    // int *numGroup;
    // numGroup = (int *)calloc(5, sizeof(int));
    // numGroup[0] = 20;
    // numGroup[1] = 40;
    // numGroup[2] = 50;
    // numGroup[3] = 60;
    // numGroup[4] = 60;
    // numGroup[5] = 60;
    // // numGroup = (void *)realloc(20, sizeof(int));
    // int *newNumGroup = (int *)realloc(numGroup, 20 * sizeof(int));
    // free(numGroup);
    // printf("\n%d\n", newNumGroup[0]);

    // ==============memory management again learning and practice ===========

    // static memory allocation
    // int numOne=10;//allocate memory by compiler when we compile the code this static memory are allocate memory in fixed size

    // dynamic memory allocation
    // calloc()
    // malloc()
    // realloc()
    // free()

    // ===calloc ====
    // int *memoryAddress;
    // memoryAddress = (int *)calloc(5, sizeof(int));
    // for (int i = 0; i < 5; i++)
    // {
    //     memoryAddress[i] = (0 + i) * 2;
    //     printf("%d\n", memoryAddress[i]);

    // }
    // free(memoryAddress);
    // printf("Size of the allocated memory: %ld\n", sizeof(memoryAddress)); // this return only pointer size not return the size of dynamic allocated memory.

    // access undefined because memory is fridge in previously so avoid this below for again access. if you want accesss and you need more memory then please use realloc() function.
    //  for (int i = 0; i < 5; i++)
    //  {
    //      memoryAddress[i] = (0 + i) * 2;
    //      printf("%d\n", memoryAddress[i]);
    //  }

    // ===mallloc ====
    // int *pointerOne;
    // pointerOne = (int *)malloc(5 * sizeof(int));
    // if (pointerOne == NULL)
    // {
    //     fprintf(stderr, "Error\n");
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     pointerOne[i] = i * 2;
    //     printf("%d\n", pointerOne[i]);
    // }
    // free(pointerOne);

    // ==============memory management again learning DAY-3 ===========
    // int *myArray;
    // myArray = malloc(20 * sizeof(int));
    // // size_t arraySize = sizeof(myArray)/sizeof(myArray[0]);//error
    // for(int i=0; i<20; i++ ){
    //     myArray[i] = i+2;
    //     printf("%d\n", myArray[i]);
    // }

    // int *myArray;
    // myArray = (int*) calloc(5, sizeof(int));
    // for(int i=0; i<5; i++){
    //     myArray[i] = i*10;
    //     printf("%d\n", myArray[i]);
    // }

    // realloc(myArray, 10*sizeof(int));
    // free(myArray);

    // int *arrayOne;
    // arrayOne = (int*) malloc(5*sizeof(int));
    // if(arrayOne!=NULL){
    //     for(int i=0; i<5; i++){
    //         arrayOne[i] = i*2;
    //         printf("Values = %d\n", arrayOne[i]);
    //     }
    // }else{
    //     printf("Memory not allocated\n");
    // }
    // free(arrayOne);

    // int *arrayTwo;
    // // arrayTwo = (int*) calloc(5, sizeof(int));
    // if(arrayTwo!=NULL){
    //     for(int i=0; i<5; i++){
    //         arrayTwo[i] = i*2;
    //         printf("Value = %d\n", arrayTwo[i]);
    //     }
    // }else{
    //     printf("\nMemory not allocated\n");
    // }
    // ==============memory management again learning DAY-4 ===========

    // int numOne = 10;
    // int arrayOne[5] = {1, 2, 3, 4, 5};
    // int size;

    // int *pointerOne;
    // printf("Please enter size you need: ");
    // scanf("%d", &size);
    // pointerOne = (int *)malloc(size * sizeof(int));
    // if (pointerOne == NULL)
    // {
    //     printf("Memory are not allocated\n");
    //     exit(0);
    // }
    // else
    // {
    //     printf("Memory are allocated sucessfully\n");
    // }

    //     int n, i, *ptr, sum = 0;

    //   printf("Enter number of elements: ");
    //   scanf("%d", &n);

    //   ptr = (int*) malloc(n * sizeof(int));

    //   // if memory cannot be allocated
    //   if(ptr == NULL) {
    //     printf("Error! memory not allocated.");
    //     exit(0);
    //   }

    //   printf("Enter elements: ");
    //   for(i = 0; i < n; ++i) {
    //     scanf("%d", ptr + i);
    //     sum += *(ptr + i);
    //   }

    //   printf("Sum = %d", sum);

    //   // deallocating the memory
    //   free(ptr);
    //     return 0;
    // int num, newSize;
    // int *pointerOne;
    // printf("Please enter number you want add: ");
    // scanf("%d", &num);
    // ===malloc===
    // pointerOne = (int *)malloc(num * sizeof(int));
    // printf("Please enter element: ");
    // for (int i = 0; i < num; ++i)
    // {
    //     scanf("%d", pointerOne + i);
    // }

    // for (int i = 0; i < num; i++)
    // {
    //     printf("%d\n", *(pointerOne + i));
    // }
    // free(pointerOne);
    // ==calloc===
    // pointerOne = (int*)calloc(num, sizeof(int));
    // for(int i=0; i<num; i++){
    //     scanf("%d", &pointerOne[i]);
    // }
    // for(int i=0; i<num; i++){
    //     printf("%d\n", pointerOne[i]);
    // }
    // free(pointerOne);

    // ==realooc==
    // pointerOne = (int *)calloc(num, sizeof(int));
    // printf("Please enter element one by one: ");
    // for (int i = 0; i < num; i++)
    // {
    //     scanf("%d", &pointerOne[i]);
    // }
    //  for(int i=0; i<num; i++){
    //     printf("%d\n", pointerOne[i]);
    // }

    // printf("Enter + size you want add more: ");
    // scanf("%d", &newSize);
    // pointerOne = (int *)realloc(pointerOne, newSize*sizeof(int));
    //   for (int i = 0; i < newSize; i++)
    // {
    //     scanf("%d", &pointerOne[i]);
    // }
    // for(int i=0; i<newSize; i++){
    //     printf("%d\n", pointerOne[i]);
    // }
    // free(pointerOne);

    // ==============memory management again learning DAY-5 ===========
    // int size;
    // int *arrayOne;
    // printf("Please enter array of size: ");
    // scanf("%d", &size);
    // arrayOne = calloc(size, sizeof(int));
    // if (arrayOne == NULL)
    // {
    //     printf("Errors\n");
    // }
    // printf("Please enter the number: ");
    // for (int i = 0; i < size; i++)
    // {
    //     scanf("%d", &arrayOne[i]);
    // }
    // // system("cls");
    // printf("\n\n\n");
    // for (int j = size; j>0; j--)
    // {
    //     printf("%d\n", arrayOne[j]);
    // }


    return 0;
}