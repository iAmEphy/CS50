#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <math.h>

int count_letters(string word);

int AtoZ[] = {97, 98, 99, 100, 101, 102, 103, 104, 105, 106, 107, 108, 109, 110, 111, 112, 113, 114, 115, 116, 117, 118, 119, 120, 121, 122};

int points [] = {};

int count_words(string word);

int count_sentence(string word);



int main(void)
{



    string input = get_string("Text: ");

    int lettercount = count_letters(input);

    int wordcount = count_words(input);

    int sentencecount = count_sentence(input);

    printf("%i letter(s)\n ", lettercount);
    printf("%i word(s)\n", wordcount);
    printf("%i sentence(s)\n", sentencecount);

    float L = (float)lettercount / wordcount * 100;

    float S = (float)sentencecount / wordcount * 100;

    float index = 0.0588 * L - 0.296 * S - 15.8;

    int final = (int)index;

    if (index < 1)
    {

        printf("Before Grade 1\n");

    }

    else if (index >= 16)
    {
        printf("Grade 16+\n");


    }
    else
    {
        printf("Grade %.0f\n", index);

    }


}

int count_letters(string word)
{
    int lettercounter = 0;

    int wordcounter = 0;

    for (int i = 0; i < strlen(word); i++)
    {

        if (isupper(word[i]) || islower(word[i]))
        {

            word[i] = tolower(word[i]);

            for (int j = 0; j < sizeof(AtoZ); j++)
            {

                if (word[i] == AtoZ[j])
                {
                    lettercounter += 1;


                }

            }

        }
        else
        {

        }

    }

    return lettercounter;
}


//Word counter
int count_words(string word)
{

    int wordcounter = 0;

    for (int i = 0; i < strlen(word); i++)
    {

        //check for empty space after word
        if (isalpha(word[i]) && isalpha(word[i + 1]) == '\0')
        {
            wordcounter += 1;


        }


        if (word[i] == ';')
        {
            wordcounter -= 1;


        }

        if (word[i] == '-')
        {
            wordcounter -= 1;


        }

        if (word[i] == '\'')
        {
            wordcounter -= 1;


        }

        else
        {

        }


    }

    return wordcounter;
}


//Sentence count
int count_sentence(string word)
{
    int sentencecounter = 0;


    //loop through sentences
    for (int i = 0; i < strlen(word); i++)
    {

        //Checking for periods, exclamation and question marks
        if (word[i + 1] == '.' ||  word[i + 1] == '!' || word[i + 1] == '?')
        {

            sentencecounter += 1;


        }

        else
        {

        }

    }

    return sentencecounter;
}