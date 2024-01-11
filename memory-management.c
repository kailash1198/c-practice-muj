#include <stdio.h>
#include <stdlib.h> //memory management
#include <string.h>

int main()
{
    // char userName[20] = "Kailash Kumar";
    // char *userIntrodution;

    // userIntrodution = calloc(200, sizeof(char));
    // printf("Please enter your introdunction: ");
    // if (userIntrodution == NULL)
    // {
    //     printf("Error\n");
    // }
    // else
    // {
    //     fgets(userIntrodution, sizeof(userIntrodution), stdin);
    // }
    // printf("\n%s\n", userIntrodution);

    // char myName[20] = "Kailash Kumar";
    // printf("%s\n", myName);
    // int sizeCheck = sizeof(myName);
    // printf("size of string myName: %d\n", sizeCheck);

    // char *aboutUser;
    // sizeCheck = sizeof(aboutUser);
    // printf("\nsize before calloc : %d\n", sizeCheck);

    // aboutUser = calloc(200, sizeof(char));
    // sizeCheck = sizeof(aboutUser);
    // printf("\nafter calloc call then size is: %d\n", sizeCheck);
    // if (aboutUser == NULL)
    // {
    //     fprintf(stderr, "Error found");
    // }
    // else
    // {
    //     strcpy(aboutUser, "hhjedf jwhef whjwehf wjehfdjwe jhfwe jwefhewj k jhfejw jkwehfjwe wehfjwe fjw fwje fuewf uewifewuhfue uweh fuiweif uweif");
    // }
    // printf("\n%s\n", aboutUser);

    // char firstName[10] = "Kailash";
    // char *secondName;
    // secondName = malloc(20);
    // strcpy(secondName, "Kumar");
    // strncat(secondName, "This is extra text after realloc call", 30);
    // printf("\nFirst Name: %s\nSecond Name: %s\n", firstName, secondName);

    int numOne = 10;
    int *numGroup;
    numGroup = (int *)calloc(5, sizeof(int));
    numGroup[0] = 20;
    numGroup[1] = 40;
    numGroup[2] = 50;
    numGroup[3] = 60;
    numGroup[4] = 60;
    numGroup[5] = 60;
    // numGroup = (void *)realloc(20, sizeof(int));
    int *newNumGroup = (int *)realloc(numGroup, 20 * sizeof(int));
    free(numGroup);
    printf("\n%d\n", newNumGroup[0]);
    return 0;
}