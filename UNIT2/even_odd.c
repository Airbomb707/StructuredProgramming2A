#include <stdio.h>

int main (){
    int num;
    printf("Enter your numbah \n > ");
    scanf("%d", &num);
    if(num!=0){
        if(num%2==0){
            printf("%d is even \n", num);
        }else{
            printf("%d is odd \n", num);
        }
    }else{
        printf("That's cero \n");
    }
}