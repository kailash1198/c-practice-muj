#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    // enum enumData{
    //    one,
    //    two,
    //    three,
    //    four
    // };

    // enum enumData enumVar;
    // enumVar = one;

    // if(enumVar==one){
    //     printf("Enum is 1\n");
    // }else{
    //     printf("Please enter correct values\n");
    // }
    // char userEnterDays[30];
    // enum weekDaysName
    // {
    //     monday,
    //     tuesday,
    //     wednesday,
    //     thursday,
    //     friday,
    //     saturday,
    //     sunday
    // };

    // enum weekDaysName todayDays;
    // todayDays = saturday;
    // printf("Please enter days Name: ");
    // fgets(userEnterDays, 20, stdin);
    // printf("%s", userEnterDays);

    // if (strcmp(userEnterDays, "monday") == 0)
    // {
    //     todayDays=monday;

    //     switch (todayDays)
    //     {
    //     case monday:
    //         printf("Today is monday\n");
    //         break;
    //     case tuesday:
    //         printf("Today is tuesday\n");
    //         break;
    //     case wednesday:
    //         printf("Today is wednesday\n");
    //         break;
    //     case thursday:
    //         printf("Today is thursday\n");
    //         break;
    //     case friday:
    //         printf("Today is friday\n");
    //         break;
    //     case saturday:
    //         printf("Today is saturday\n");
    //         break;
    //     case sunday:
    //         printf("Today is sunday\n");
    //         break;
    //     default:
    //         printf("Please valid week days\n");
    //         break;
    //     }
    // }

    /* Create a program that uses a union to represent a person's contact information. The contact information should include either a phone number (as an integer) or an email address (as a string). The program should have a menu that allows the user to input either a phone number or an email address for a person. Use a union to store the contact information, and include a flag in the union to indicate whether the information is a phone number or an email address. Implement functions to input, display, and update the contact information. Ensure that the program handles both types of information correctly based on the flag.*/
    int mobileNum[12];
    char email[50];
    int option, b, c;
    enum contactInformation
    {
        mobileNumber,
        emailAddress
    } infoDetails;

    printf("Please enter details as per menu\n");
    printf("1. Mobile number\n2. Email Address\n");
    printf("Please select option what you want store: ");
    scanf("%d", &option);
    if (option == 1)
    {
        infoDetails = mobileNumber;
        printf("\nPlease enter mobile Number: ");
        for (int i = 0; i < 13; i++)
        {
            scanf("%d", &mobileNum[i]);
        }
    }
    else if (option == 2)
    {
        infoDetails = emailAddress;
        printf("Please enter Email address: ");
        // fgets(email, 50, stdin);
        scanf("%s", email);
    }

    return 0;
}