#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }

// int findStrSize(char *string){
//     int length = 0;
//     while(*string!='\0'){
//         length++;
//         string++;
//     }
//     return length;
// }

// int reverseStr(char *str)
// {
//     int length = strlen(str);
//     char *start = str;
//     char *end = str + length - 1;

//     while(start<end){
//         char temp = *start;
//         *start = *end;
//         *end = temp;
//         start++;
//         end--;
//     }
// }

// char *concatenateStrings(const char *str1, const char *str2)
// {
//     size_t len1 = strlen(str1);
//     size_t len2 = strlen(str2);

//     char *result = (char *)malloc((len1 + len2 + 1) * sizeof(char));

//     if (result == NULL)
//     {
//         printf("Memory not allocated\n");
//     }

//     strcpy(result, str1);
//     strcat(result, str2);

//     return result;
// }

// int findLargestElement(int *ptrArray, int size)
// {
//     int largeNum = *ptrArray;
//     for (int i = 0; i < size; i++)
//     {
//         if (ptrArray[i] > largeNum)
//         {
//             largeNum = ptrArray[i];
//         }
//     }
//     return largeNum;
// }

// void swapNumber(int *a, int *b)
// {
//     int tem = *a;
//     *a = *b;
//     *b = tem;
//     printf("The number one = %d\n", *a);
//     printf("The number two = %d\n", *b);
// };

int main()
{

    // int array[] = {8, 10, 20, 50, 100, 90};
    // int bigNum = findLargestElement(array, 6);
    // printf("Big num is = %d\n", bigNum);
    // ▶️Swap two variables using pointers.
    // int numOne=10, numTwo=20;

    //  swap(&numOne, &numTwo);
    // printf("Numone = %d\n", numOne);
    // printf("Numtwo = %d\n", numTwo);

    // ▶️ Write a program to find the length of a string using pointers.
    //  char userName[] = "Kailash Kumar";
    //  int strLength = findStrSize(userName);
    //  printf("The size of string is = %d\n", strLength);

    // ▶️Implement a function to reverse a string using pointers.
    // char userName[]= "Kailash";
    // reverseStr(userName);
    // printf("%s\n", userName);

    // ▶️Implement a function to concatenate two strings dynamically.
    // const char *firstName = "Kailash";
    // const char *lastName = "Kumar";
    // char *fullName = concatenateStrings(firstName, lastName);

    // printf("Full Name = %s\n", fullName);
    // free(fullName);

    // ▶️Write a function to find the largest element in an array using pointers.
    // int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // ▶️ Create a program to swap two numbers using pointers.
    //  int numOne = 10;
    //  int numTwo = 20;
    //  swapNumber(&numOne, &numTwo);

    // ▶️Implement a program to add two complex numbers using structures.
    // struct addComplexNumber
    // {
    //     /* data */
    //     int numOne;
    //     int numTwo;
    // };
    // struct addComplexNumber numVar;
    // numVar.numOne = 100;
    // numVar.numTwo = 200;
    // int sumOfComplexNum = 0;
    // sumOfComplexNum = (numVar.numOne) + (numVar.numTwo);
    // printf("The sum of complex number using structure is = %d\n", sumOfComplexNum);

    // ▶️Write a program to sort an array of structures based on a specific criterion.

    struct arrayOfStruct
    {
        int numOne;
        int numTwo;
        int numThree;
    };

    struct arrayOfStruct array[3];
    // array->numOne = 100;
    // array->numTwo = 454;
    // array->numThree = 210;

    array[0].numOne = 100;
    array[0].numTwo = 200;
    array[0].numThree = 300;

    
    return 0;
}
