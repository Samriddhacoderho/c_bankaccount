#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "withdraw.c"
#include "add.c"
#include "check.c"

void choice(char[], int);

float initial_amount = 10000;

void choice(char def_email[30], int def_pin)
{
    char user_answer = 'y';
    int user_choice;

    while (user_answer == 'y')
    {
        printf("\n\nEnter any one of the following numbers:\n1)Withdraw Amount\n2)Add Amount\n3)Check Balance:\n");
        scanf("%d", &user_choice);

        if (user_choice < 1 || user_choice > 3)
        {
            printf("Invalid choice!");
            exit(0);
        }
        else
        {
            switch (user_choice)
            {
            case 1:
                initial_amount=withdraw_func(initial_amount, def_email, def_pin);
                break;

                case 2:
                    initial_amount=add_func(initial_amount, def_email, def_pin);
                    break;

                case 3:
                    initial_amount=check_func(initial_amount, def_email, def_pin);
                    break;

            default:
                printf("Syntax Error");
            }

            printf("\nDo you want to use our service again?(Y/N)");
            scanf(" %c", &user_answer);
            user_answer=tolower(user_answer);
            if(user_answer!='n' && user_answer!='y')
            {
                printf("Invalid choice");
                exit(0);
            }
        }
    }
}