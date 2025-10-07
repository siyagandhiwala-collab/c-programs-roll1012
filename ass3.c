//Ass:3 Write a program to cheak whether a number is a prime palindrome.

#include <stdio.h>
int main()
{
    int num, i, p = 1;
    int original, reversed = 0, digit, temp;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) 
    {
        p = 0;
    }
    else 
    {
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0) 
            {
                p = 0;
                break;
            }
        }
    }

    original = num;
    temp = original;

    for (; temp > 0; temp = temp / 10)
    {
        digit = temp % 10;
        reversed = reversed * 10 + digit;
    }

    if (p == 1 && reversed == num)
    {
        printf("%d is a Prime Palindrome.\n", num);
    } 
    else 
    {
        printf("%d is NOT a Prime Palindrome.\n", num);
    }

    return 0;
}

