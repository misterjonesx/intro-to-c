/************************************************
* filename: exercise2.c
* Exercise: Module 6, Exercise 2
* Name: Michael McCarron
* Date Created: January 29, 2019
*
* Description: This program prompts the user to 
* input account information that is stored in a
* C structure, and then prints the input back out
* to the user.
*************************************************/

#include <stdio.h>

//define max array lengths account structure (max length +1)
#define MAXNUM 51
#define MAXADD 201
#define MAXCIT 101
#define MAXZIP 6
#define MAXNAME 51

//define structure for account
struct account { //structure template, tag is account
        char number[MAXNUM];
        char address[MAXADD];
        char city_state[MAXCIT];
        char zip[MAXZIP];
        double balance;
        double credit_limit;
        char account_name[MAXNAME];
    }; //end of structure template

int main(void)
{
    struct account credit; //declare struct variable
    
    printf("Please enter the account number:\n");
    fgets(credit.number, MAXNUM, stdin);                //get account #
    printf("Now enter the address:\n");
    fgets(credit.address, MAXADD, stdin);               //get address
    printf("Now enter the city and state:\n");
    fgets(credit.city_state, MAXCIT, stdin);            //get city/state
    printf("Now enter the ZIP code:\n");
    fgets(credit.zip, MAXZIP, stdin);                   //get zip
    printf("Now enter the account balance:\n");
    printf("$");
    scanf("%lf", &credit.balance);                      //get account balance
    printf("Now enter the credit limit:\n");
    printf("$");
    scanf("%lf", &credit.credit_limit);                 //get credit limit
    while (getchar() != '\n')   //clear input line
        continue;
    printf("Finally, please enter the account name:\n");
    fgets(credit.account_name, MAXNAME, stdin);         //get account name
    
    //print results
    printf("\n");
    printf("Here are your account details:\n");
    
    //using fputs() with strings because '\n' character from fgets() causes issues
    printf("Account name:    "); fputs(credit.account_name, stdout); 
    printf("Account number:  "); fputs(credit.number, stdout);
    printf("Account balance: $%.2lf \n", credit.balance);
    printf("Credit limit:    $%.2lf \n", credit.credit_limit);
    printf("Address:         "); fputs(credit.address, stdout);
    printf("City/State:      "); fputs(credit.city_state, stdout);
    printf("ZIP:             "); fputs(credit.zip, stdout);
    
    return 0;
}