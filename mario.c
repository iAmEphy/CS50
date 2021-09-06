#include <cs50.h>
#include <stdio.h>

int main(void)
{

    int height;
    do
    {

        height = get_int("\nWhat is the pyramid's height(1-8 only)? ");

    }
    while (height < 1 || height > 8);
    
    //counter
    int counter = height - 1;
    
    for (int i = 0; i < height; i++)
    {
        
        
        //prints space for right allignment
        for (int j = 0; j < counter; j++)
        {
            
            //periods
            //printf(".");
            
            //space
            printf(" ");
        }//prints ######## 
        
        for (int k = 0; k < i + 1; k++)
        {
            printf("#");
            
        }
        
        //right alligning counter
        counter--;
        //new line
        printf("\n");
    }
    
   
    
    
    
}