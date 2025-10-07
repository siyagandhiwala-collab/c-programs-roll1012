//Ass:7 Write a program to compute the sum of even elements in an array.

#include <stdio.h>
int main() 
{
    int n, i, sum = 0 ;
    int arr[n] ;
    
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n); 

    printf("Enter %d elements:", n);
    
    for(i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    for(i = 0; i < n; i++)
    {
        if(arr[i] % 2 == 0) 
        {
            sum = sum + arr[i];
        }
    }

    printf("Sum of even elements = %d\n", sum);
    
    return 0;
}
