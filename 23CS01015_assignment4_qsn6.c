/*This is a program of a basic calculator which can perform addition subtration multiplication and division operations*/
#include <stdio.h>
int main()
{
    char choice;
    int num1, num2;
    printf("Enter number 1 : ");
    scanf("%d", &num1);
    printf("Enter number 2 : ");
    scanf("%d", &num2);
    printf("Select the operation : ");
    getchar();
    scanf("%c", &choice);
    switch (choice)
    {
    case '+':
        printf("%d + %d = %d", num1, num2, num1 + num2);
        break;
    case '-':
        printf("%d - %d = %d", num1, num2, num1 - num2);
        break;
    case '*':
        printf("%d * %d = %d", num1, num2, num1 * num2);
        break;
    case '/':
        printf("%d / %d = %f", num1, num2, (float)num1 /(float) num2);
        break;

    default:
        break;
    }
    return 0;
}
