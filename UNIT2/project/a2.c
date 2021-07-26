#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[]){
    
    float add = atoi(argv[1])+atoi(argv[2]);
    float min = atoi(argv[1])-atoi(argv[2]);
    float multi = atoi(argv[1])*atoi(argv[2]);
    float div = atof(argv[1])/atof(argv[2]);

    printf("Your results are:");
    printf("sum: %f\n", add);
    printf("substraction: %f\n", min);
    printf("multiplication: %f\n", multi);
    printf("divition: %f\n", div);
    
}