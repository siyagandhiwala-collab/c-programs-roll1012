//Ass:10 Write a program to compute the GCD of two numbers.

#include <stdio.h>
int main()
{
    int a, b, i, gcd = 1;

    printf("Enter first integer: ");
    scanf("%d", &a);
    
    printf("\n Enter second integer: ");
    scanf("%d", &b);

    for (i = 1; i <= a && i <= b; i++) 
    {
        if (a % i == 0 && b % i == 0) 
        {
            gcd = i;
        }
    }

    printf("\n GCD of %d and %d is %d.\n", a, b, gcd);

    return 0;
}

