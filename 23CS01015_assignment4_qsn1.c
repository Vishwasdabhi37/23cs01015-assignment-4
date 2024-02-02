/*This is a program to check a number is odd or even using switch case statements*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number: ");
    scanf("%d", &num);
    int check = num % 2;
    switch (check)
    {
    case 0:
        printf("The number is even.\n");
        break;
    case 1:
        printf("The number is odd.\n");
        break;

    default:
        break;
    }
    return 0;
}