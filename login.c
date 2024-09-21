#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void login(char[],int);

void login(char def_email[30],int def_pin)
{
    char user_email[30];
    int user_pin;
    int attempts = 1;
    int chances = 3;
    while (attempts <= 3)
    {
        printf("\nEnter user_email:");
        scanf("%s", user_email);
        printf("\nEnter user pin:");
        scanf("%d", &user_pin);
        if ((strcmp(user_email, def_email) != 0) && (user_pin != def_pin))
        {
            printf("\nBoth Email and Password Incorrect!");
            chances -= 1;
            attempts += 1;
            printf("\nChances Left: %d", chances);
        }
        else if ((strcmp(user_email, def_email) != 0) && (user_pin == def_pin))
        {
            printf("\nEmail Incorrect!");
            chances -= 1;
            attempts += 1;
            printf("\nChances Left: %d", chances);
        }
        else if ((strcmp(user_email, def_email) == 0) && (user_pin != def_pin))
        {
            printf("\nPin Incorrect!");
            chances -= 1;
            attempts += 1;
            printf("\nChances Left: %d", chances);
        }
        else
        {
            printf("\nLogin Successful");
            attempts=6;
        }
        
        if(attempts==4)
        {
            printf("\nYou are temporarily banned!");
            exit(0);
        }
    }
}