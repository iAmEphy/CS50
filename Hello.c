#include <stdio.h>
//library
#include <cs50.h>
#include <string.h>

//main
int main(void){

    //print line
    printf("Hello World\n");
    printf("12:12 am 9/5/2021 Sunday\n");

    string input = get_string("What is your name?\n");
    string loser = "Tony";
    if(strcmp(input,loser) == 0){
        printf("Hey loser \n");
    }
    else{
        printf("Hello, %s\n", input);
    }



}