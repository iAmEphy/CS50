#include <cs50.h>
#include <stdio.h>

int main(void){
    
    //Ask for input
    printf("What is the first number?\n");

    int x =  get_int("x: ");
    //float x =  get_float("x: ");
    
    //Second number
    printf("What is the second number?\n");

    //int to float or else int will not leave decimal, only whole number
    int y = get_int("y: ");
    //float y = get_float("y: ");
   
   // X / Y
   //cast each variable instead of parenthesis
    float z = (float)x / (float)y;
    
    //Calculate
    printf("The division of two numbers is\n");
    
    //if theres a remainder say fraction 
    if(x % y != 0){
        printf("That's a fraction\n");
        printf("%f\n", z);
    }
    else{
        printf("%f\n", z);
    }
    
}
