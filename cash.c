#include <cs50.h>
#include <stdio.h>

int main(void)
{
    
   
    float input;
    //do loop to get positive number
    do
    {

        input = get_float("How much change is owed? \n");
        input *= 100;
    }
    while (input < 0);


    //change
    float quarters = 25;
    float dimes = 10;
    float nickels = 5;
    float pennies = 1;
    
    //counter of each type
    int quartercounter = 0;
    int dimecounter = 0;
    int nickelcounter = 0;
    int pennycounter = 0;
    
    //Input divided by each change amount, remove that amount from input & increase counter
    if (input != 0.000)
    {
        
        quartercounter = (float)(input / quarters);
        
        input = input - (quartercounter * quarters);
        
        
        if (input != 0.00)
        {
            dimecounter = (float)(input / dimes);
        
            input = input - (dimecounter * dimes);
        }
        
        if (input != 0.00)
        {
            nickelcounter = (float)(input / nickels);
            
            input = input - (nickelcounter * nickels);
        }
        
        if (input != 0.00)
        {
            
            pennycounter = (float)(input / pennies);
            
            input = input - (pennycounter * pennies);
            
        }
    }
    //total count
    
    int total = quartercounter + dimecounter + nickelcounter + pennycounter;
    printf("%i\n", total);
    
    
}