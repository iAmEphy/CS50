#include <cs50.h>
#include <stdio.h>


int main(void){
    
    //get single character and store in char c
    char c = get_char("Do you agree? \n");
    
    
    //single quote in C
    if(c == 'y' || c == 'Y'){
        
        printf("Agreed.\n");
        
    }
    else if(c == 'n' || c == 'N'){
        
        printf("Not agreed.\n");
        
    }
    
}