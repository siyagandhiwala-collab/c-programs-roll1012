//Ass:11 Write a program to find the largest element in a 1D array.

#include <stdio.h>
int main()
{
    int n , i , max;
    int arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
        max = arr[0];

    for(i = 1; i < n; i++) 
    {
        if(arr[i] > max) 
        {
            max = arr[i];
        }
    }
    
    printf("The largest element in the array is: %d\n", max);

    return 0;
}

