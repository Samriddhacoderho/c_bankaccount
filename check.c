#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

float check_func(float, char[], int);

float check_func(float initial_amount, char def_email[30],int def_pin)
{
    printf("\nYour Current Amount: %f",initial_amount);
    return initial_amount;
}