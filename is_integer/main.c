#include <stdio.h>
#include <stdlib.h>

int main(void){

    int number;

    if(scanf("%1i", &number) == 1){ // <-- This function only reads a digit and check if it's a number
        printf("Is a number \n");
    }else{
        printf("Not a number \n");
    }

    return 0;
}