#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(int argc, string argv[]){
    
    
    //Only need 1 arguement
    if (argc != 2)
    {
        printf("Usage: ./caesar k\n");
        return 1;
    }
    
    //No letters, only numbers
    for (int i = 0, n = strlen(argv[1]); i < n; i++)
    {
        if (!isdigit(argv[1][i]))
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }
    
    int key = atoi(argv[1]); 
    
    // input
    string input = get_string("plaintext: ");
    
    string result = input;
    //Loop, change every character
    for (int x = 0, j = strlen(input); x < j; x++){
        
        //letters
        if (isalpha(input[x]))
        {
            //uppercase?
            
            if (isupper(input[x])){
                result[x] = ((input[x] - 'A' + key) % 26) + 'A';
            }
            //lowercase?
            
            else if (islower(input[x])){
                result[x] = ((input[x] - 'a' + key) % 26) + 'a';
            }
        }
    }
    
    //result
    printf("ciphertext: %s\n", result);
    
    return 0;
    
}