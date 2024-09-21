#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "login.c"
#include "choice.c"

//Test of feature 1

int main()
{
    char def_email[30] = "satyalsamriddha@gmail.com";
    int def_pin = 1000;

    login(def_email,def_pin);
    choice(def_email,def_pin);
    printf("\nThank you for choosing our service!\n");
}
