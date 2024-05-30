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

    printf("\nEnter Array Reavers Oder :");
        for(int i=n-1; i>=0; i--)
        {
            printf("%3d",*(a+i));
        }



}
