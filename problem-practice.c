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


int main()
{
    // Swap two variables using pointers.
    // int numOne=10, numTwo=20;

    //  swap(&numOne, &numTwo);
    // printf("Numone = %d\n", numOne);
    // printf("Numtwo = %d\n", numTwo);

    // Write a program to find the length of a string using pointers.
    // char userName[] = "Kailash Kumar";
    // int strLength = findStrSize(userName);
    // printf("The size of string is = %d\n", strLength);

    // Implement a function to reverse a string using pointers.
    // char userName[]= "Kailash";
    // reverseStr(userName);
    // printf("%s\n", userName);

    // Implement a function to concatenate two strings dynamically.
    // const char *firstName = "Kailash";
    // const char *lastName = "Kumar";
    // char *fullName = concatenateStrings(firstName, lastName);

    // printf("Full Name = %s\n", fullName);
    // free(fullName);

    // Write a function to find the largest element in an array using pointers.
    // int myArray[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    return 0;
}