#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>

int main(){
    // printf("\n\nCheck\n\n");

    FILE *myFileAddress = (int*)fopen("test.txt", "w");
    fputs("This is file text Okay \n", myFileAddress);
    myFileAddress = fputs("Done Kailash, Good Job", myFileAddress);
    return 0;
}