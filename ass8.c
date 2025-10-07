//Ass:8 Write a program to compute the sum of digits of a number.

#include <stdio.h>
int main() 
{
    int temp , number, digit, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    temp = number;

    if (temp < 0)
    {
        temp = -temp;
    }

    for (; temp > 0; temp = temp / 10) 
    {
        digit = temp % 10;
        sum = sum + digit;
    }

    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}
