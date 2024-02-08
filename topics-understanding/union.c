#include <stdio.h>
#include <string.h>

int main(){

    union studentData
    {
        char studentName[30];
        int studentAge;
        int studentPassYear;
    };

    union studentData dataEntry;
    dataEntry.studentAge = 25;
    printf("\n%d\n", dataEntry.studentAge);
    
    return 0;
}