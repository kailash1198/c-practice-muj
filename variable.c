#include <stdio.h>
// #include <windows.h>

// #define USER_AGE 18
// #define USER_NAME "kailash"

// int myFuncOne(){
//     int a=10, b=20;
//     return a+b;
// }

// int myFuncTwo(){
//     int a=30, b=40;
// }

int main()
{
    // printf("Variable Learning and Understanding\n\n");
    // int myNumOne = 10;
    // char myFirstLetter = "K";
    // printf("My num is : %d \n\n", myNumOne);
    // printf("My First Letter is : %c \n\n", myFirstLetter);

    // int myNumber = 163653;
    // printf("%d", myNumber);

    // ======== constants===========
    // const int myAge = 10;
    // printf("%d\n", myAge);
    // printf("%d\n\n", USER_AGE);
    // printf("%s\n\n", USER_NAME);

    // printf("%d\n\n", a);

    // int numOne = 10;

    // printf("\a");
    // fflush(stdout);

    struct studentData
    {
        char studentName;
        char studentAddress[60];
        // int studentAge;
    };

    struct studentData stName;
    stName.studentName = 'K';
    printf("%c\n\n", stName.studentName);

    stName.studentAddress = {{"Bangalore"}};

    return 0;
}