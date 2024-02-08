#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct studentData
{
    int studentID;
    char studentName[20];
    float studentGPA;
};

int main()
{
    // Write a C program that uses a structure to store and display the information of a student, including ID, name, and GPA.
    char stuName[20];
    struct studentData student1;

    printf("Please enter following details to store data :\n");

    printf("Enter your student ID number: ");
    scanf("%d", &student1.studentID);

    getchar();

    printf("Enter your Student Name: ");
    fgets(student1.studentName, 20, stdin);


    printf("ENter your student GPA : ");
    scanf("%f", &student1.studentGPA);

    printf("\n\n");
    printf("Student ID = %d\n", student1.studentID);
    printf("Student Name = %s", student1.studentName);
    printf("Student GPA = %f\n\n\n", student1.studentGPA);

    return 0;
}