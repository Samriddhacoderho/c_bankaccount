#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float withdraw_func(float,char[],int);

float withdraw_func(float initial_amount,char def_email[],int def_pin)
{
    float withdraw_amount;
    int withdraw_func_pin;

    printf("\n\nWelcome to Withdraw Amount Feature\n\n");
    printf("Enter amount you want to withdraw:");
    scanf("%f",&withdraw_amount);

    if(withdraw_amount<0 || withdraw_amount>initial_amount)
    {
        printf("\nInvalid Withdraw!");
        exit(0);
    }
    else
    {
        printf("\nEnter your transaction pin:");
        scanf("%d",&withdraw_func_pin);
        if(withdraw_func_pin!=def_pin)
        {
            printf("\nIncorrect Transaction Pin");
            exit(0);
        }
        else
        {
            printf("\nTransaction Successful");
            initial_amount=initial_amount-withdraw_amount;
            printf("\nRemaining Balance:%f",initial_amount);
            return initial_amount;
        }
    }
}