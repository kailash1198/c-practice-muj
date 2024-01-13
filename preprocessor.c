// ==== header file file include ======
#include "preprocessor-include-test.c";
#include <stdio.h>
#include <string.h>
// pre processor macros #define code -
#define COMPARE_NUMBER 10
#define SUM_CALCULATION(a, b) (a + b)

// =========== conditional compilation=========
#define PI 3.14159

int main()
{

    // =========== macros pre processor ===========
    int userInputNumnber = 9;
    if (userInputNumnber < COMPARE_NUMBER)
    {
        userInputNumnber = COMPARE_NUMBER;
        printf("\n\n%d\n", userInputNumnber);
    }
    printf("%d\n", userInputNumnber);

    int numOne = 20, numTwo = 40, sum = 0;
    sum = SUM_CALCULATION(numOne, numTwo);
    printf("\n\n%d\n\n", sum);

    // ============= file inclusion ========
    printf("\nHelloe World");
    strPrinting(); // this code comes from another file using #include "" this preprocessor properties in header files.

    // =========== conditional compilation=========
#ifdef PI
    printf("PI is defined\n");
#elif defined(SQUARE)
    printf("Square is defined\n");
#else
#error "Neither PI or nor Square are defined"
#endif

#ifndef SQUARE
    printf("Squre is not defined\n");
#else
    printf("Square is defined\n");
#endif
    return 0;
}