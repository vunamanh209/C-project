#include <stdio.h>
#include <stdlib.h>

// Given 100 numbers and print the first 50 odd numbers
int main(int argc, char *argv[]) {
    int i;
    for(i = 0; i < 100; i++){
        if (i % 2 == 0){
            continue; 
        }
        if (i < 50){
            printf("%d ", i);  
        }
    }
    return 0;
}

