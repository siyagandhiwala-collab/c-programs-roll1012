//Ass:13 Write a program to print the first N natural numbers in reverse.

#include <stdio.h>
int main() 
{
    int N, i;

    printf("Enter a positive number N: ");
    scanf("%d", &N);
    
    if (N <= 0)
    {
        printf("Please enter a positive integer.\n");
    }

    printf("The first %d natural numbers in reverse are:\n", N);
    
    for(i = N; i >= 1; i--) 
    {
        printf("%d ", i);
    }

    printf("\n");

    return 0;
}

