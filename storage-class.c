#include <stdio.h>
#include <string.h>
#include "practice.c";//link othe c file for access exter storage class variables

int numOne;
extern int numValue;

int main()
{
    // int numOne;
    // printf("%d\n", numOne);
    // int a = 10, i;
    // printf("%d ", ++a);
    // {
    //     int a = 20;
    //     for (i = 0; i < 3; i++)
    //     {
    //         printf("%d ", a); // 20 will be printed 3 times since it is the local value of a
    //     }
    // }
    // printf("%d ", a);

    // static int numTwo;
    // printf("\n%d\n", numTwo);

    // register int registerVar;
    // printf("\n%d\n", registerVar);

    // extern int numOne;
    // printf("\n%d\n", numOne);

    // static int numOne = 10;
    // printf("\n%d\n", sizeof(numOne));

    auto char myOption = 'a'; // all local variale are auto storage types and scope only within inside function so you cannot access outside of function

    register char myStr[10] = "Kailash";
    // extern int numThree = 100; //error
    
    return 0;
}