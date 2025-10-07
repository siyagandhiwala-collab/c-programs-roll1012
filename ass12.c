//Ass:12 Write a program to cheak whether a number is palindrome. 

#include <stdio.h>
int main() 
{
    int num, original, reversed = 0, remainder, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    for(temp = num; temp > 0; temp = temp / 10) 
    {
        remainder = temp % 10;
        reversed = reversed * 10 + remainder;
    }

    if(original == reversed) 
    {
        printf("%d is a palindrome number.\n", original);
    } 
    else
    {
        printf("%d is not a palindrome number.\n", original);
    }

    return 0;
}

