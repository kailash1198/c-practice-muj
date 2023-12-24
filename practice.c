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
    // char userPromt[100];
    // char taskWork[20] = "task";

    // int taskPageOpen()
    // {
    //     printf("\n\n");
    //     printf("Welcome to TASK page section\n\n");
    // }

    // printf("\n--------------------------------------------\n");
    // printf("\n\nHello Kailash, Welcome to Your world of Learning\n\n");
    // printf("\tTell me today how can i help you ...\n");
    // printf("Just write what you wanr to get from me :\n");
    // scanf("%s", userPromt);

    // if (strcmp(userPromt, "task") == 0)
    // {
    //     printf("Okay wait....\n\n");
    //     system("clear");
    //     taskPageOpen();
    // }
    // else
    // {
    //     system("clear");
    //     printf("\n\n\n................ERROOR.............\n\n");
    // }

    // =============== 24-12-2023 ===================
    // short int numOne = 10;
    // short int numTwo = 20;
    // int ManipulateNum = (numOne + numTwo) / 2 + (numOne / 2);
    // printf("\n The result is manipulate number is that given : %d\n\n", ManipulateNum);

    // int substractionNum = numTwo - numOne;
    // printf("\n %d \n\n", substractionNum);

    // int numThree = 20, numFourth = 40, randomVar;
    // numThree += numFourth;
    // int randomVar +=numThree; //error because declare and addition cannot done in same time and same line
    // printf("\n Assignment result value is %d \n\n", numThree);

    // int numOne = 1, numTwo = 2, numThree = 3, numResult;
    // if (numOne && numTwo >= 0)
    // {
    //     printf("\n\nWait .......\n\n");
    //     system("clear");
    //     if (strcmp(system("clear"), "clear") == 0)
    //     {
    //         printf("\n\n Right \n\n");
    //     }
    // }

    // void screenWatch(int a, int b)
    // {
    //     if (a == 0)
    //     {
    //         system("clear");
    //     }
    //     else
    //     {
    //         system("")
    //     }
    // }

    // int screenStatus = system("clear");
    
    // printf("\n\nTest text\n\n");
    // int screenStatus = system("cls");
    // if (screenStatus == 0)
    // {
    //     printf("\nNow screen is clear\n");
    // }
    // else
    // {
    //     printf("\nScreen is not clear\n");
    // }

    char userNameOne[20][5];
    system("clear");
    printf("\nPlease Enter User Name: ");
    scanf("%s", userNameOne[0]);
    printf("\nfirst entry userName is : %s\n", userNameOne[0]);
    return 0;
}