#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    int num=0;
    for (int i = 1; i < argc; i++){
        num = num + atof(argv[i]);
    }

    float size=argc-1;
    float average = num/size;
    printf("The average of the recorded numbers is: %f \n",average);
}