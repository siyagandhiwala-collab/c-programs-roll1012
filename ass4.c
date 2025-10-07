//Ass:4 write a program to insert an element at a specific position in array.

#include<stdio.h>
int main()
{
    int arr[6] = {10,20,30,40,50};
    int i,pos=2,value=25;
    
    for(i=5;i>pos;i--)
    {
        arr[i] = arr[i-1];
    }
        arr[pos] = value;
        
        for(i=0;i<6;i++)
        {
            printf(" %d\n",arr[i]);
        }
    return 0;
}

