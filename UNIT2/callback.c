#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include "./folderTest/utils.h"
#include "stdbool.h"

void callToNumber(int number){
        printf("Llamando al %d...!\n", number);
}
//Declare
void SecurityCamera(void (*callToNumber) (int number), int EmergencyNumber);
int main(){
        // for(;;){
                SecurityCamera( callToNumber, 911  );
        // }
        return 0;
}

//Define
void SecurityCamera(void (*callToNumber) (int number), int EmergencyNumber){
        //Logica Compleja//
        bool thief = false;
        if(thief){ //Si detecta ladron debe hacer algo
                // Ejecutar un callback
                callToNumber(EmergencyNumber);
        }
}