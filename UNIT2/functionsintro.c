#include<stdio.h>

int myNumber = 3;
float myFloat = 6.21;
char myString[255] = "Hewwo world";

void sayHewwo(char message[]){
    printf("%s", message);
}

//declare
void sayMyName(char message[]);

int main(){
    sayHewwo("Hewwo World \n");
    sayMyName("Deerboye \n");
    return 0;
}

//define
void sayMyName(char message[]){
    printf("%s", message);
}