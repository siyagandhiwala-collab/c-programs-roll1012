//Ass:2 Write a program to convert a string to lowercase.

#include <stdio.h>
int main()
{
    char str[100];
    int i;
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    for (i = 0; str[i] != '\0'; i++) 
    {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {  
            str[i] = str[i] + 32;            
        }
    }

    printf("String in Lowercase: %s\n", str);
    return 0;
}
