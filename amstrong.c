#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, digits = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count the number of digits
    do
    {
        digits++;
        num = num / 10;
    } while(num != 0);

    num = originalNum;

    // Calculate the sum of each digit raised to the power of digits
    do
    {
        remainder = num % 10;
        result = result + pow(remainder, digits);
        num = num / 10;
    } while(num != 0);

    if(result == originalNum)
        printf("%d is an Armstrong Number.", originalNum);
    else
        printf("%d is not an Armstrong Number.", originalNum);

    return 0;
}