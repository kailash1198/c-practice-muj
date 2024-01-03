#include <stdio.h>
#include <string.h>

int main()
{

    struct studentData
    {
        char studentName[30];
        int studentAge;
        int studentMarks;
        char studentAddress[50];
    };
    strcpy(studentDetails.studentName, "Kailash Kumar");
    struct studentData studentDetails;
    studentDetails.studentAge = 25;
    studentDetails.studentMarks = 98;
    strcpy(studentDetails.studentAddress, "Bengaluru");
    printf("\n%s\n", studentDetails.studentName);

    return 0;
}