#include <stdio.h>
int main() 
{
    char operation;
    float n1, n2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%f %f",&n1, &n2);

    switch(operation)
    {
        case '+':
            printf("%f + %f = %f",n1, n2, n1+n2);
            break;

        case '-':
            printf("%f - %f = %f",n1, n2, n1-n2);
            break;

        case '*':
            printf("%f * %f = %f",n1, n2, n1*n2);
            break;

        case '/':
            printf("%f / %f = %f",n1, n2, n1/n2);
            break;

        // operator doesn't match any case constant +, -, *, /
        default:
            printf("Error! operator is not correct");
    }

    return 0;
}
