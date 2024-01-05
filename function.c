#include <stdarg.h> // for access variadic function
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// ===== function ====
// int wordChecker(char userWord[29]){
// for(int i=0; i<=strlen(userWord); i++ ){
//     strch(userWord[i]);
// }
// }

// float noReturnFunc(float numOne)
// {
//     (numOne*100) / (1 * 100);
//     return numOne;
// }

// === nested function =====

// void outsideFunction()
// {
//     printf("\nTest done\n");
//     void insideFunction()
//     {
//         printf("\nTest done-2\n");
//     }
//     insideFunction();
// }

// int sumFunction(int a, int b)
// {
//     int totalNumber = a + b;
//     int printFunction()
//     {
//         printf("\nThe total number is: %d\n", totalNumber);
//     }
//     printFunction();
// }

// ====== CALL BACK FUNCTION =====

// void callBackFunction(){
//     printf("\nThis is call back function\n");
//     callBackFunction();
// }

// void funcOne(){
//     printf("\nThis is numone function");
// }

// void funcTwo(){
//     printf("\nThis is numtwo function");
// }

// void callBackFunc(void (*pointerFunc)()){
//    (*pointerFunc)();
// }

// void funcOne(){
//     printf("\nThis is func one\n");
// }

// void funcTwo(){
//     printf("\nThis is func Two");
// }

// void myFunc(void (*pointerOne)()){
//     (*pointerOne)();
// }

// ====== VARIADIC FUNCTION ======
// int AddNumbers(int n, ...)
// {
//     int Sum = 0;
//     va_list ptr;
//     va_start(ptr, n);
//     for (int i = 0; i < n; i++)
//         Sum += va_arg(ptr, int);
//     va_end(ptr);
//     return Sum;
// }

// int variadicFunction(int numArgumentOne, int numArgumentTwo, ...)
// {
//     int totalNum = 0;

//     va_list listArgument;
//     va_start(listArgument, numArgumentTwo);

//     for (int i = 0; i < numArgumentOne; i++)
//     {
//         totalNum += va_arg(listArgument, int);
//     }

//     va_end(listArgument);
// }

// int sumNum(int num, ...)
// {
//     int sum = 0;
//     va_list listVar;
//     va_start(listVar, num);
//     for (int i = 0; i < num; i++)
//     {
//         int n = va_arg(listVar, int);
//         sum = sum+n;
//     }
//     va_end(listVar);
//     return sum;
// }

// int substractFunc(int num, ...)
// {
//     int subtract=0;
//     va_list argumentList;
//     va_start(argumentList, num);
//     for (int i = 0; i < num; i++)
//     {
//         int argumentStore = va_arg(argumentList, int);
//         subtract = subtract -(argumentStore);
//     }
//     va_end(argumentList);
//     return subtract;
// }

// ==== main function ======
int main()
{

    int squareRoot = sqrt(400);
    printf("\nThe sqare root of : %d\n", squareRoot);

    // printf("\n%d\n", substractFunc(2, 10, 20));
    // printf("\n%d\n", sumNum(3,100,10, 100));

    // printf("\n%d\n", variadicFunction(10, 20, 30));
    // printf("\n\n Variadic functions: \n");
    // printf("\n 1 + 2 = %d ",
    //        AddNumbers(2, 1, 2));

    // printf("\n 3 + 4 + 5 = %d ",
    //        AddNumbers(3, 3, 4, 5));

    // printf("\n 6 + 7 + 8 + 9 = %d ",
    //        AddNumbers(4, 6, 7, 8, 9));

    // printf("\n");

    // myFunc(&funcTwo);
    // callBackFunc(&funcTwo);
    // callBackFunc(&funcOne);

    // outsideFunction();
    // sumFunction(100, 200);

    // char userParagraph[300];
    // char userWord[20];
    // printf("\n\nPlease enter your Paragraph: \n");
    // gets(userParagraph);
    // system("clear");
    // puts(userParagraph);

    // printf("\nEnter word you want check: ");
    // scanf("%s", userWord);

    // if(userWord!=0){
    //     wordChecker(userWord);
    // }

    // float PercentageResult = noReturnFunc(9.876);
    // printf("\nThe percentage value is : %f\n", PercentageResult);
    // char line[100];
    // char *nextLine;
    // while (getline(line, sizeof(line), stdin))
    // {
    // }

    // char userLine[100];
    // printf("\nPlease enter 2 line: ");
    // fgets(userLine, 100, stdin);

    // int numberSum(int numOne, int numTwo)
    // {
    //     int sumNum = numOne + numTwo;
    //     printf("\n%d\n", sumNum);
    // }

    // numberSum(100, 150);

    // ====== CALL BACK FUNCTION =====
    // callBackFunction();

    return 0;
}