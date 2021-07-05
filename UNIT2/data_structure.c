#include <stdio.h>
#include <string.h>
#include <stdio.h>

#include "./utils.h"

//arrays
int myIntArray[5];
int myInt = 4;
float myFloat = 6.21;

typedef struct mago{

        int vida;
        int mana;
        char* nombre;
        //mas atributos//
        //sayHewwo
        void (*Saludo) (char message[]);
        int (*sumaDosNumeros) (int  argumento1, int argumento2);
}Mago;

// typedef struct mago Mago;

int main(){
        
        Mago Axel = {100, 100, "Axel_Millan", sayHewwo, addTwoNumbers};
        struct mago Esme = {200, 200, "Esme"};
        
        printf( "%s\n", axel.nombre  );
        axel.Saludo("Hewwo, im a wizzawd");
        printf( "%d\n" , axel.sumaDosNumeros(20,25));
        
        fillArray(myIntArray, 5);
        printArray1D(myIntArray,  5);
        printf("%d", myIntArray[0]);
        printf("%d", myIntArray[1]);
        printf("%d", myIntArray[2]);
        printf("%d", myIntArray[3]);
        printf("%d", myIntArray[4]);
        
        Array* myArray =  returnArray();
        printf("\n%d ", myArray->dirArray[0]);
        printf("\n%d ", myArray->dirArray[1]);
        printf("\n%d ", myArray->dirArray[2]);

        return 0;
}