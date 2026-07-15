#include <stdio.h>

int main()
{
    int n, i = 1, num, sum = 0;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    while(i <= n)
    {
        printf("Enter number %d: ", i);
        scanf("%d", &num);

        sum = sum + num;
        i++;
    }

    printf("Sum = %d", sum);

    return 0;
}