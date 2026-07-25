#include <stdio.h>

int main()
{
    int a, b, result = 0, memory = 0;
    char op;
    int choice;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter operator (+, -, *, /, %%): ");
    scanf(" %c", &op);

    printf("Enter second number: ");
    scanf("%d", &b);

    switch(op)
    {
        case '+':
            result = a + b;
            break;

        case '-':
            result = a - b;
            break;

        case '*':
            result = a * b;
            break;

        case '/':
            if(b != 0)
                result = a / b;
            else
            {
                printf("Division by zero is not allowed.\n");
                return 0;
            }
            break;

        case '%':
            if(b != 0)
                result = a % b;
            else
            {
                printf("Modulo by zero is not allowed.\n");
                return 0;
            }
            break;

        default:
            printf("Invalid operator.\n");
            return 0;
    }

    printf("\nResult = %d\n", result);

    printf("\nMemory Options\n");
    printf("1. MS  (Store Result)\n");
    printf("2. MR  (Recall Memory)\n");
    printf("3. MS+ (Add Result to Memory)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            memory = result;
            printf("Memory Stored = %d\n", memory);
            break;

        case 2:
            printf("Memory Value = %d\n", memory);
            break;

        case 3:
            memory += result;
            printf("Updated Memory = %d\n", memory);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}