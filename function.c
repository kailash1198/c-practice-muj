#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// ===== function ==== 
int wordChecker(char userWord[29]){
for(int i=0; i<=strlen(userWord); i++ ){
    strch(userWord[i]);
}
}

// ==== main function ====== 
int main(){
    char userParagraph[300];
    char userWord[20];
    printf("\n\nPlease enter your Paragraph: \n");
    gets(userParagraph);
    system("clear");
    puts(userParagraph);

    printf("\nEnter word you want check: ");
    scanf("%s", userWord);

    if(userWord!=0){
        wordChecker(userWord);
    }
    return 0;
}