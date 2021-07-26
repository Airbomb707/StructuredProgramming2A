#include <stdio.h>

int main(){
    char name[128];
    int dob;

    printf("Welcome, please input your name:\n");
    scanf( "%s" , name);

    printf("Please input your birth year %s, be mindful this is an 18+ site \n", name);
    scanf("%d", &dob);

    if (dob>2003){
        printf("We're sorry %s, you need to be 18+ to legally log in\n", name);
    }else{
        printf("Welcome back %s \n", name);
    }
    return 0;
}