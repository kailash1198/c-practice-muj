#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    struct structureOne
    {
        /* data */
        char userName[20];
        int userAge;
        int userCode;
        int userIP;
    };

    struct structureOne userData;
    userData.userName = strcpy("kailash");

    // char *studentName[40] =;
    // *studentName = "Kailash";
    // printf("\n%s\n", *studentName);
    return 0;
}