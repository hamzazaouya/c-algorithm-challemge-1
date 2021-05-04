#include <stdio.h>
#include <stdlib.h>
#define NEW_LINE() printf("\n");

int main()
{
    float num1 = 0, num2 = 0;
    char op;
    int cont = 1;

    while (cont != 0){

        printf("Enter First Number: ");
        scanf("%f", &num1);
        printf("Enter Secound Number: ");
        scanf("%f", &num2);
        printf("Enter Operator: ");
        scanf(" %c", &op);

        printf("\n");

        switch(op) {

            case '+': printf("%.1f + %.1f = %.1f\n", num1, num2, (num1+num2)); break;
            case '-': printf("%.1f - %.1f = %.1f\n", num1, num2, (num1-num2)); break;
            case '*': printf("%.1f * %.1f = %.1f\n", num1, num2, (num1*num2)); break;
            case '/': printf("%.1f / %.1f = %.1f\n", num1, num2, (num1/num2)); break;
            default: printf("Please enter + - / * \n");
        }

        printf("\n");

        printf("if you Want to Exite Enter Number 0 ");
        scanf("%d", &cont);

    }

    printf("Thanks For Using Our Calualtor");

    return 0;
}
