/*This is a program to find out the maximum number amongs 3 numbers*/
#include <stdio.h>
int main()
{
    int num1, num2, num3;
    printf("Enter first number : ");
    scanf("%d", &num1);
    printf("Enter second number : ");
    scanf("%d", &num2);
    printf("Enter third number : ");
    scanf("%d", &num3);
    int max = (num1 > num2) ? num1 : num2;
    int max2 = (num3 > max) ? num3 : max;
    printf("The largest number among three is %d.", max2);
    return 0;
}