#include <stdio.h>

int main()
{
    int a, b, choice;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    printf("\nBitwise Operations Menu\n");
    printf("1. AND (&)\n");
    printf("2. OR (|)\n");
    printf("3. XOR (^)\n");
    printf("4. Left Shift (<<)\n");
    printf("5. Right Shift (>>)\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch(choice)
    {
        case 1:
            printf("Result = %d", a & b);
            break;

        case 2:
            printf("Result = %d", a | b);
            break;

        case 3:
            printf("Result = %d", a ^ b);
            break;

        case 4:
            printf("Enter number of positions to shift: ");
            scanf("%d", &b);
            printf("Result = %d", a << b);
            break;

        case 5:
            printf("Enter number of positions to shift: ");
            scanf("%d", &b);
            printf("Result = %d", a >> b);
            break;

        default:
            printf("Invalid choice!");
    }

    return 0;
}