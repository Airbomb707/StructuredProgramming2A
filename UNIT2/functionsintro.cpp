#include<iostream>

int myNumber = 3;
float myFloat = 6.21;
std::string myString = "Hewwo world";

//Declare
void sayHewwo(std::string tag1);

int main(){
    sayHewwo(myString);
    return EXIT_SUCCESS;
}

//Define
void sayHewwo(std::string tag1){
    std::cout<<tag1<<std::endl;
}