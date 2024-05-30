#include <stdio.h>

void main()
{
    int n;
     printf("how many number :");
     scanf("%d",&n);
     int a[n];

     for(int i=0; i<n; i++)
     {
      scanf("%2d",a+i);
     }
   printf("Enter Array number :");
     for(int i=0; i<n; i++)
     {
      printf("%2d",*(a+i));
     }





}

