#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    // struct structureOne
    // {
    //     /* data */
    //     char userName[20];
    //     int userAge;
    //     int userCode;
    //     int userIP;
    // };

    // struct structureOne userData;
    // strcpy(userData.userName, "kailash");
    // userData.userAge = 19;
    // char *studentName[40] =;
    // *studentName = "Kailash";
    // printf("\n%s\n", *studentName);

    // struct userDetails
    // {
    //     int serialNumber[10];
    //     int subjectMarks[10];
    // };
    // struct userDetails user;
    // for (int i = 0; i <= 10; i++)
    // {
    //     user.serialNumber[i] = i;
    //     printf("%d - %d\n", user.serialNumber[i], i);
    // }
    // printf("%d\n", user.serialNumber);

    // typedef int numOne;
    // typedef int numTwo;

    // numOne myNum = 100;
    // numTwo yourNum = 200;

    // typedef char string;
    // string firstName[20] = "Kailash";
    // string lastName[20] = "kumar";

    // printf("\n%s\n", firstName);
    // printf("\n%s\n", lastName);

    // union studentDetails
    // {
    //     /* data */
    //     char userName[10];
    //     int myAge;
    //     int userCode;
    // };

    // union studentDetails userData;

    // enum weekDays{
    //     monday,
    //     tuesday,
    //     wednesday,
    //     thursday,
    //     friday,
    //     saturday,
    //     sunday
    // };

    // enum weekDays today, tomorrow;
    // today = friday;
    // tomorrow = saturday;

    // if(today==friday){
    //     printf("\nToday is friday so i have to lots of work for completing my task and goal");
    // }else{
    //     printf("Erro");
    // }

    // typedef char text;
    // text userName[20] = "Kailash";
    // printf("%s\n", userName);

    // struct userData
    // {
    //     char userName[50];
    //     char userPassword[20];
    //     char userCode[10];
    //     int userAge;
    //     int userPinCode;
    // };

    // struct userData userDetails;
    // strcpy(userDetails.userName, "kailash1198");
    // strcpy(userDetails.userPassword, "kailashK8@");
    // strcpy(userDetails.userCode, "123kailash");
    // userDetails.userAge = 25;
    // userDetails.userPinCode = 848207;

    // printf("\n");
    // printf("User Name : %s\n", userDetails.userName);

    // union companyData
    // {
    //     /* data */
    //     char companyName[50];
    //     int companyYear;
    //     char companyLocation[100];

    // };

    // union companyData details;
    // strcpy(details.companyName, "abc limited");
    // // details.companyName[50] = "promac";
    // printf("\n%s\n", details.companyName);

    // ============= PRACTICE DAY-2 ===============
  
    // int arrayOneInt[] = {2, 4, 5, 6, 4, 23, 43, 23, 23};
    // char arrayTwoChar[3] = {'a', 'b', 'c'};
    // float arrayThreeFloat[4] = {1.2, 12.33, 12.34, 1.30};
    // double arrayFourDouble[3] = {1.3322342, 3.227333, 22.2833};

    // size_t arrayOneSize = sizeof(arrayOneInt) / sizeof(arrayOneInt[0]);
    // printf("Array one size is = %ld\n", arrayOneSize);

    // for (int i = 0; i < arrayOneSize; i++)
    // {
    //     printf("\n%d\n", arrayOneInt[i]);
    // }

    char firstName[10] = "Kailash";
    char secondName[10] = "Kumar";
    // strcat(firstName, secondName);
    // printf("%s\n", firstName);
    // printf("%s\n", strcat(firstName, secondName));
    int result = strcoll(firstName, secondName);
    if(result<0){
        printf("Fisrt name and second name not same\n");
    }else{
        printf("Error found\n");
    }

    return 0;
}