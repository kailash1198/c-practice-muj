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

// ==== main function ======
int main()
{
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


    char userLine[100];
    printf("\nPlease enter 2 line: ");
    fgets(userLine, 100, stdin);

    return 0;
}