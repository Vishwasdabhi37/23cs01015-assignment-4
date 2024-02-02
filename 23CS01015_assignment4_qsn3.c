/*This is a program to find the amount of interest on the basis of the credit score and current balance*/
#include <stdio.h>
int main()
{
    int credit_score, cur_bal;
    printf("Enter your credit score : ");
    scanf("%d", &credit_score);
    printf("Enter your current balance : ");
    scanf("%d", &cur_bal);
    int int_rate;
    if (credit_score <= 600)
    {
        int_rate = 15;
    }
    else if (credit_score <= 750)
    {
        int_rate = 12;
    }
    else if (credit_score > 750)
    {
        int_rate = 10;
    }
    float interest = cur_bal * int_rate / 100;
    printf("The interest is %.2f\n", interest);
    return 0;
}