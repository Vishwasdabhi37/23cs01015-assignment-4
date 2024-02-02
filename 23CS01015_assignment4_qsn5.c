/*This is a program to check whether given number is armstrong or not*/
#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    while (num < 100 || num > 999)
    {
        printf("Incorrect input.\n");
        scanf("%d", &num);
    }
    int count = 0;
    int temp = num;
    int d1, d2, d3;
    d1 = temp % 10;
    temp /= 10;
    d2 = temp % 10;
    temp /= 10;
    d3 = temp % 10;
    int sum_cube = d1 * d1 * d1 + d2 * d2 * d2 + d3 * d3 * d3;
    if (sum_cube == num)
    {
        printf("Yes\n");
    }
    else
        printf("No\n");

    return 0;
}