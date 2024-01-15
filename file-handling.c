#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // printf("\n\nCheck\n\n");

    // FILE *myFileAddress = (int*)fopen("test.txt", "w");
    // fputs("This is file text Okay \n", myFileAddress);
    // myFileAddress = fputs("Done Kailash, Good Job", myFileAddress);

    int option;
    char userIntro[100];
    
    printf("Please tell me what you want : ");
    printf("\n");
    printf("1. Write simple intro text\n2. Enter BioData\n3. Enter your story\n\n");
    printf("Tell me what you want to write: ");
    scanf("%d", &option);
    if (option == 1)
    {
        char inputText[100];
        FILE *introAddress;
        introAddress = fopen("intro.txt", "r");
        fgets(userIntro, 100, introAddress);
        system("clear");
        printf("%s\n", userIntro);
        fclose(introAddress);
        printf("\n\nEnter input text which you want add in text file: ");
        fgets(inputText, 100, stdin);
        // scanf("%s", inputText);
        introAddress = fopen("intro.txt", "a+");
        fputs(inputText, introAddress);
    }
    else if (option == 2)
    {
        FILE *bioDataAddress = fopen("biodata.txt", "w");
    }
    else if (option == 3)
    {
        FILE *storyAddress = fopen("story.txt", "w");
    }
    else
    {
        system("clear");
        printf("\nPlease enter valid option to write in file\n");
    }
    return 0;
}