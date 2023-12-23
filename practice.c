#include <stdbool.h>
#include <stdio.h> //library standard i/o
#include <stdlib.h>
#include <string.h>

// int addNum(int numOne, int numTwo) // numOne and numTwo are parameters
// {
//     int totalNum = numOne + numTwo;
//     return totalNum;
// }

int main() // declare main function
{
    // printf("Hello world\n"); // printf is inbuilt library function of stdio.h

    // int ResultNum = addNum(10, 20); // arguments 10,20 becuase argument is real value when function called and we given values to function during function calling.

    // printf("%d\n", ResultNum);

    // const int userAge = 100;
    // userAge = 20; //got error if this line code executed after complile the code
    // printf("User age is = %d\n", userAge);

    // int numOne = 10;
    // short int myNum = 20;
    // long int myBigNum = 386464578;
    // signed int numTwo = 2;
    // unsigned int numThree = 10;
    // int sizeStore = sizeof numOne;
    // int sizeStore = sizeof myNum;
    // int sizeStore = sizeof myBigNum;
    // int sizeStore = sizeof numTwo;
    // int sizeStore = sizeof numThree;
    // printf("\n\n %d \n\n", sizeStore);

    // signed int numOne = 10;
    // unsigned int numTwo =-200;
    // error beacuse you cannot use negative in unsigned
    //  printf("\n Signed int memory size in bytes: %d\n", numOne);
    //  printf("\n Un Signed int memory size in bytes: %u\n", numTwo);

    // printf("Hello\n");
    // short int numOne = 10;
    // int sizeCheck = sizeof numOne;
    // printf("\n\n %d \n\n", sizeCheck);

    //   long int numOne = 10;
    // int sizeCheck = sizeof numOne;
    // printf("\n\n %d \n\n", sizeCheck);

    // int numOne = 10;
    // int sizeCheck = sizeof numOne;
    // printf("\n\n %d \n\n", sizeCheck);

    // long double numOne = 10;
    // int sizeCheck = sizeof numOne;
    // printf("\n\n %d \n\n", sizeCheck);

    // short int numOne = 89654;
    // printf("\n\n%d\n\n", numOne);

    // int decimal = 42;
    // int octal = 052;

    // float sci = 1.2e-3;
    // printf("\n\n %f \n\n", sci);

    // const int octalNumbers = 0567;
    // const int octalNumbersTwo = 056457;
    // printf("\n\n %d \n\n", octalNumbers);
    // printf("\n\n %d \n\n", octalNumbersTwo);

    // const int hexaNumbers = 0x567;
    // const int hexaNumbersTwo = 0x56457;
    // const int binaryNum = 0b110;
    // printf("\n\n %d \n\n", hexaNumbers);
    // printf("\n\n %d \n\n", hexaNumbersTwo);
    // printf("\n\n %d \n\n", binaryNum);

    // printf("\n\n Escape sequence program practice \n\n");
    // printf("\a");
    // printf("\b");
    // printf("\t\t\t\t");
    // printf("\?\?\?\? okay?");
    // printf("\r\r\r\r\r");

    // bool - fundamental data types which can have only two values true or either false

    // bool myOpinion = true;
    // bool yourOpinion = false;
    // printf("\n %d is called true values\n", myOpinion);
    // printf("\n %d is called false value\n", yourOpinion);

    // ==================PRACTICE ===============
    char userPromt[100];
    char taskWork[20] = "task";

    int taskPageOpen()
    {
        printf("\n\n");
        printf("Welcome to TASK page section\n\n");
    }

    printf("\n--------------------------------------------\n");
    printf("\n\nHello Kailash, Welcome to Your world of Learning\n\n");
    printf("\tTell me today how can i help you ...\n");
    printf("Just write what you wanr to get from me :\n");
    scanf("%s", userPromt);

    if (strcmp(userPromt, "task") == 0)
    {
        printf("Okay wait....\n\n");
        system("clear");
        taskPageOpen();
    }
    else
    {
        system("clear");
        printf("\n\n\n................ERROOR.............\n\n");
    }

    return 0;
}