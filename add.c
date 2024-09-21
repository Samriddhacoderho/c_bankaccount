#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float add_func(float, char[], int);

float add_func(float initial_amount, char def_email[30], int def_pin)
{
    float add_amount;
    int add_func_pin;

    printf("\n\nWelcome to Add Amount Feature\n\n");
    printf("Enter amount you want to add:");
    scanf("%f", &add_amount);

    if (add_amount <= 0)
    {
        printf("\nInvalid add amount!");
    }
    else
    {
        printf("\nEnter your transaction pin:");
        scanf("%d", &add_func_pin);

        if (add_func_pin != def_pin)
        {
            printf("\nIncorrect Transaction Pin");
            exit(0);
        }
        else
        {
            printf("\nTransaction Successful");
            initial_amount = initial_amount + add_amount;
            printf("\nRemaining Balance:%f", initial_amount);
            return initial_amount;
        }
    }
}