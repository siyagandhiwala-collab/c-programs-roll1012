//Ass:1 Write a program to search for an element in array.

#include<stdio.h>
int main() 
{
      int i , arr[100] , size , f=0 , n;
      
      printf("Enter the size of array : ");
      scanf("%d", &size);
      
      for(i=0 ; i<size ; i++) 
      {
          printf("\n Enter value of %d: ",i);
          scanf("%d", &arr[i]);
      }
      
      printf("Enter the element to be found: ");
      scanf("%d", &n);
      
      for(i=0 ; i<size ; i++) 
      {
          if( arr[i] == n) 
          {
              printf("\n Element %d found on index %d \n",n,i);
              f=1;
              break;
          }
      }
      
      if(f!=1)
      {
          printf("\n Element %d does not exist \n", n);
      }
      
      return 0;
}

    
 
