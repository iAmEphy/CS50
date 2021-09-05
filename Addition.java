#include <cs50.h>
#include <stdio.h>


int main(void){

    //Ask for input

    printf("What is the first number?\n");

    int x =  get_int("x: ");

    //Second number
    printf("What is the second number?\n");

    int y = get_int("y: ");

    //Calculate
    printf("The sum of two numbers is\n");


    //Less than 10
    if(x + y < 10){
        printf("%i\n", x + y);
        printf("That's a small number dude\n");
    }
    //Bigger than 1k less than 5k
    else if(x + y > 1000 && x + y > 5000){
        printf("%i\n", x + y);
        printf("That's a huge number zzzzz\n");
    }
    else{
        printf("%i\n", x + y);
    }



}