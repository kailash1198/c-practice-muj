#include <stdbool.h>
#include <stdio.h> //library standard i/o
#include <stdlib.h>
#include <string.h>
#include <sys/utsname.h>
#include <utime.h>

// ----- function -------

// void myFunc(int a)
// {
//     for (int i = 0; i <= 100; i++)
//     {
//         if (a == i)
//         {
//             printf("\n A is equal to %d\n", a);
//         }
//     }
// }
// int optionSelectUser;
// void userDashboardFunc()
// {
//     printf("\n\n");
//     printf("\tWELCOME TO ARYAN BOOKS LIBRARY\n");
//     printf("\t-----------------------------------");
//     printf("\n\n");
//     printf("1. Read Book - Get Books\n2. Books List\n3. Request a new Book\n4. Return Book\n");
//     printf("\n");
//     printf("\nPlease enter your option in number:");
//     scanf("%d", &optionSelectUser);
// }

// void readBook()
// {
//     printf("\n\n");

// }

// int myFunctionOne(int a)
// {
//     if (a <= 10 && a != 0)
//     {
//         printf("\nA is grether than 0 and less then 11\n");
//     }
//     else
//     {
//         printf("\nPlease enter a valid number\n");
//     }
// };
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

    // char userNameOne[20][5];
    // system("clear");
    // printf("\nPlease Enter User Name: ");
    // scanf("%s", userNameOne[0]);
    // printf("\nfirst entry userName is : %s\n", userNameOne[0]);

    // char a=110, b=20, c;
    // c = (a*b)/2;
    // printf("\n\n %d \n\n", c);

    // char numOne=100, numTwo = 10, numThree;
    // numThree = numOne-numTwo;
    // printf("\n %c\n", numThree);

    // int numOne = 10000;
    // char(numOne);
    // printf("\n %d \n", numOne);

    // int numOne = 100;
    // char firstLetter = 'A'; //ascii value of A = 65;

    // numOne = numOne + firstLetter;
    // float numTwo = numOne + 1.5;
    // printf("\n numOne = %d \n", numOne);
    // printf("\nNumtwo = %f\n", numTwo);

    // int numOne = 65;
    // char myLetter = (char)numOne;
    // float myValue = (float)myLetter;
    // printf("\n %c \n", myLetter);
    // printf("\n %f \n", myValue);

    // int numOne = 10;
    // int numTwo;
    // printf("\n Numone is output at : %d\n", numOne);
    // printf("\nPlease enter your input value which you want to store in numTwo variable\n");
    // scanf("%d", &numTwo);
    // printf("\nYour input is : %d\n", numTwo);

    // char studentName[100] = "Kailash";
    // char studentAddress[100][2];
    // puts(studentName);
    // puts("Please enter your addrees: ");
    // gets(studentAddress);

    // char userInput;
    // printf("Please enter first letter of alphabet:\n");
    // userInput = getchar();
    // putchar(userInput);

    // int numOne = 10, numTwo = 20, numThree = 30;
    // printf("\nThe numOne value is %d and numTwo value is %d and also numThree value is %d.\n", numOne, numTwo, numThree);

    // int totalStock = 1000;
    // int alertStock = 100;

    // if(totalStock==alertStock){
    //     printf("\nWait... Your stock is Low\n");
    // }else{
    //     printf("\nYou can sell more because your stock are stil there\n");
    // }
    // int myNum=6;
    // switch (myNum)
    // {
    // case 1 ... 6/* constant-expression */:
    //     /* code */
    //     printf("\nThe range is 1-6\n");
    //     break;

    // default:
    //     break;
    // }

    // int numSet[] = {0, 1, 2, 3};
    // for (int i = 0; i <= 3; i++)
    // {
    //     switch (numSet[i])
    //     {
    //     case 1 ... 6 /* constant-expression */:
    //         /* code */
    //         printf("\nThe range is= %d = 1-6\n", numSet[i]);
    //         break;
    //     case 7 ... 12:
    //         printf("\nThe range is= %d = 7-12\n", numSet[i]);
    //     default:
    //         printf("\nPlease enter valid input\n");
    //         break;
    //
    // === system info using system functioin in c ======
    // struct utsname info;
    // uname(&info);
    // printf("System name:  %s\n", info.sysname);
    // printf("Release:      %s\n", info.release);
    // printf("Version:      %s\n", info.version);
    // printf("Machine:      %s\n", info.machine);

    // ====== function ==========
    // myFunctionOne(9);
    // myFunctionOne(11);

    // char userName[50];
    // char userPassword[20];

    // printf("\n\n");
    // printf("Aryan Books Library, Barahi\n");
    // printf("------------------------------\n");
    // printf("\n");
    // printf("Log In for Access Libray:\n");
    // printf("\n\n");
    // printf("User Name: ");
    // scanf("%s", userName);
    // printf("User Password: ");
    // scanf("%s", userPassword);
    // if (strcmp(userName, "kailash") == 0)
    // {
    //     if (strcmp(userPassword, "12345678") == 0)
    //     {
    //         system("clear");
    //     }
    // }

    // userDashboardFunc();
    // if (optionSelectUser == 1)
    // {
    //     system("clear");
    //     readBook();
    // }

    // int userInput;
    // printf("\nPlease enter number: ");
    // scanf("%d", &userInput);
    // myFunc(userInput);

    // ======= PRACTICE ============
    // char myWord[10] = "Hello";
    // char *reverseWord = strrev(myWord);
    // printf("%s\n", reverseWord);
    // int stringLength = strlen(myWord);
    // if(int i=stringLength-1; i<stringLength; i--){
    //     printf("%c", myWord[i]);
    // }

    // char mystrg[60];
    // int leng, g;

    // scanf("%s", mystrg);
    // leng = strlen(mystrg);

    // for (g = leng - 1; g >= 0; g--)
    // {

    //     printf("%c", mystrg[g]);
    // }

    // char myName[10] = "Kailash";
    // int length, i;

    // length = strlen(myName);
    // for(i=length; i>=0; i--){
    //     printf("%c", myName[i]);
    // }

    // char userName[20] = "aryan singh";
    // int wordLength = strlen(userName);

    // for(int count = wordLength-1; count>=0; count--){
    //     printf("%c", userName[count]);
    // }

    // char sentenceString[20] = "My name is kailash";
    // char word[10] = "kailash";
    // char *searchString = strstr(sentenceString, word);
    // printf("\n%s\n", searchString);

    // char userName[20];
    // char userPassword[20];
    // printf("\n");
    // printf("Log In Page\n");
    // printf("Please enter username: ");
    // fgets(userName, 20, stdin);
    // printf("Please enter password: ");
    // fgets(userPassword, 20, stdin);

    // char mainUserName[20]="kailash1198";
    // char mainUserPassword[20]="kailash123";

    // char *matchUsername = strstr(userName, mainUserName);
    // char *matchPassword = strstr(userPassword, mainUserPassword);

    // if(matchUsername!=NULL){
    //     if(matchPassword!=NULL){
    //         system("clear");
    //         printf("Now you are logged in");
    //     }
    // }

    return 0;
}
