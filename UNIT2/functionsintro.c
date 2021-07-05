#include<stdio.h>
#include "/mnt/d/StructuredPrograming2A/unit2/utils.h"

int myNumber = 3;
float myFloat = 6.21;
char myString[255] = "Hewwo world";

void sayHewwo(char message[]){
    printf("%s", message);
}

//declare
void sayMyName(char message[]);

int main( ){
        sayHewwo("Hewwo world" ); 
        sayMyName("Axel");
        int myResult = addTwoNumbers(2, 5);
        printf("myResult is equal to: %d \n", myResult);
        printf("%d", libInteger);
        return 0;
}

//define
void sayMyName(char message[]){
    printf("%s", message);
}