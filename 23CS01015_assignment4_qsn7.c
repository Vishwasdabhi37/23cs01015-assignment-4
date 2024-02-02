/*This is a program for a theme park to determine the ticket price acoording to age*/
#include <stdio.h>
int main()
{
    int age;
    int std_rate = 50;
    printf("Enter your age : ");
    scanf("%d", &age);
    if (age < 5)
    {
        printf("Your ticket is free\n");
    }
    else if (age <= 12)
    {
        printf("Your ticket price is 20 rupees\n");
    }
    else if (age <= 59)
    {
        printf("Your ticket price is 50 rupees\n");
    }
    else if (age > 59)
    {
        printf("Your ticket price is %d.\n", 50 - (50 * 20 / 100));
    }

    return 0;
}