//Ass:9 Write a program to print the first N even number.

#include <stdio.h>
int main() 
{
    int N, i;

    printf("Enter the value of N: ");
    scanf("%d", &N);

    for (i = 1; i <= N; i++) 
    {
        printf("%d ", 2 * i);
    }

    printf("\n");

    return 0;
}

