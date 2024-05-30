#include<stdio.h>
int main()
{
    int i=0;
    int arr[]={1,2,9,4,5,6,7};
    int *max;
    max=&arr;

     for(int i=0;i<7;i++)
     {
         if(*max < *(max+i))
         *max= *(max+i);
     }
    printf("max:%d",*max);



}

