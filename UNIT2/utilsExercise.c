#include "./utils.h"
#include <stdio.h>

int main(){
    ROBOT Airbomb;
    Airbomb.name="Airbomb";
    Airbomb.type="Music_protogen";
    Airbomb.height=5.6;
    Airbomb.weight=0.1;
    Airbomb.DOF=3;
    Airbomb.greet = greet; 

    ROBOT Cobalt;
    Cobalt.name="Cobalt";
    Cobalt.type="Unknown_synth";
    Cobalt.height=6.8;
    Cobalt.weight=0.2;
    Cobalt.DOF=7;
    Cobalt.greet = greet; 
    
    Airbomb.greet(Cobalt);

}