#include<stdio.h>
#include<conio.h>
int main()
{
    int a[]={5,2,5,4};
    int *p=&a;
    for(int i=0; i<4; i++)
{


     for(int j=i+1; j<4; j++)
        {
        if(*(p+i)==*(p+j))
            printf("%d",*(p+i));

         }
}

    getch();
}

