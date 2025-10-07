//Ass:14 Write a program to find the second largest element in an array.

#include <stdio.h>

int main()
{
    int arr[100], n, i;
    int max, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    if (n < 2) 
    {
        printf("Need at least two elements.\n");
    }

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    max = second = arr[0];

    for (i = 1; i < n; i++) 
    {
        if (arr[i] > max) 
        {
            second = max;
            max = arr[i];
        } 
        else if (arr[i] > second && arr[i] != max) 
        {
            second = arr[i];
        }
    }

    if (max == second)
    {
        printf("No distinct second largest element.\n");
    } 
    else 
    {
        printf("Second largest element is %d\n", second);
    }

    return 0;
}

