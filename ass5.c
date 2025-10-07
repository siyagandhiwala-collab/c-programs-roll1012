//Ass:5 Write a program to convert celsius to fahrenhit.

#include <stdio.h>
int main() 
{
    float celsius, fahrenheit;
    
    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("%f Celsius = %f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
