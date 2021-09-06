#include <cs50.h>
#include <stdio.h>

int main(void){
    // TODO: Prompt for start size
   

    int x;
    int y;
    do{
        
        x = get_int("\nPopulation start size(Must be bigger than 9: ");
        
    }
    while(x < 9);
    
    // TODO: Prompt for end size
    do{
        
        y = get_int("\nPopulation end size:(Must be bigger than starting population): ");
        
    }
    while(y < x);
    
    int year = 0;
    // TODO: Calculate number of years until we reach threshold
    for(int i = x; x < y; i++){
        
        x = x + (x / 3) - (x / 4);
        
        year++;
    }

    printf("Number of years: %i", year);
    
    
    // TODO: Print number of years
}