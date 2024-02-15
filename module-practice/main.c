#include "module-1.c"
#include "module-2.c"
#include "module-3.c"
#include <string.h>
#include <stdio.h>


int main()
{
    printf("\n\nThis is Main C Program File\n\n");
    moduleOneFunc();
    moduleTwoFunc();
    moduleThreeFunc();

    return 0;
}