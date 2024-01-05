#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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



// ==== main function ======
int main()
{

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