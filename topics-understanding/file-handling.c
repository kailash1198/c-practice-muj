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

    // int option;
    // char userIntro[100];

    // printf("Please tell me what you want : ");
    // printf("\n");
    // printf("1. Write simple intro text\n2. Enter BioData\n3. Enter your story\n\n");
    // printf("Tell me what you want to write: ");
    // scanf("%d", &option);
    // // fflush(stdin);
    // if (option == 1)
    // {
    //     char inputText[100];
    //     FILE *introAddress;
    //     introAddress = fopen("intro.txt", "r");
    //     fgets(userIntro, 100, introAddress);
    //     // fflush(stdin);
    //     system("clear");
    //     printf("%s\n", userIntro);
    //     fclose(introAddress);
    //     printf("\n\nEnter input text which you want add in text file: ");
    //     fgets(inputText, 100, stdin);
    //     // scanf("%s", inputText);
    //     introAddress = fopen("intro.txt", "a+");
    //     fputs(inputText, introAddress);
    // }
    // else if (option == 2)
    // {
    //     FILE *bioDataAddress = fopen("biodata.txt", "w");
    // }
    // else if (option == 3)
    // {
    //     FILE *storyAddress = fopen("story.txt", "w");
    // }
    // else
    // {
    //     system("clear");
    //     printf("\nPlease enter valid option to write in file\n");
    // }

    // ============= PRACTICE AGAIN DAY-2 ============
    // FILE *fileLocation;
    // char text[100];
    // char userText[20];
    // fileLocation = fopen("kailash.txt", "w");
    // fprintf(fileLocation, "Hi, I am Kailash Kumar.");
    // fprintf(fileLocation, " And i am from Bihar");
    // fprintf(fileLocation, " Crrently i am doing BCA from Manipal University.");

    // fclose(fileLocation);

    // FILE *readingLocation;
    // readingLocation = fopen("kailash.txt", "r");
    // fgets(text, 100, readingLocation);
    // printf("\n\n%s\n\n", text);

    // fclose(readingLocation);

    // fileLocation = fopen("kailash.txt", "a+");
    // printf("\nPlease enter what you want add in file : ");
    // fgets(userText, 20, stdin);

    // fprintf(fileLocation, userText);
    // fclose(fileLocation);

    // ============= PRACTICE AGAIN DAY-3 ============

    FILE *filePointer;
    // filePointer = fopen("file.txt", "w");
    // for (int i = 0; i < 5; i++)
    // {
    //     fprintf(filePointer, "My name is Kailash Kumar\n");
    // }
    // fclose(filePointer);

    // int numList[5];
    // filePointer = fopen("file.txt", "r+");
    // printf("\n\nAddition of integer from file.txt\n\n");

    // fscanf(filePointer, numList);

    // for (int i = 0; i < 5; i++)
    // {
    //     printf("Number is = %d\n", numList[i]);
    // }

    // int numList[5];
    // filePointer = fopen("file.txt", "r");
    // while (fscanf(filePointer, "%d", &numList) == 1)
    // {
    //     printf("%d\n", numList[0]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     fscanf(filePointer, "%d", &numList[i]);
    // }
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d\n", numList[i]);
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     fscanf(filePointer, "%d", &numList[i]);
    // }
    // printf("%d\n", numList[4]);
    // int numOne = numList[0], numTwo = numList[1];
    // int sum = numOne + numTwo;
    // printf("The sum is : %d\n", sum);
    // fclose(filePointer);

    // filePointer = fopen("file.txt", "r");
    // char fileString[10];
    // // char buffer[MAX_LINE_LENGTH];
    // fgets(fileString, 10, filePointer);
    // printf("%s\n", fileString);
    return 0;
}