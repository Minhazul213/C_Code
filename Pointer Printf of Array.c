#include <stdio.h>
#include <string.h>
int main()
{
      int i;
       int arr[6];
      int *p;
        p=&arr[0];
      for(int i=0; i<5; i++)
       {
           scanf("%3d",p++);

       }
       for(int i=0; i<5; i++)
       {
           printf("%3d",*p++);

       }


     getch();
}
