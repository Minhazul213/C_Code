#include<stdio.h>
#include<conio.h>
int main()
{
    int a[5]={3,6,2,5,4};
     int temp;
     int *p;
     p=&a;
    for(int i=0; i<5; i++)
    {


      for(int j=i+1; j<5; j++)
      {


        if( *(p+i) > *(p+j) )
         {
             temp=*(p+i);
            *(p+i)=*(p+j);
            *(p+j)=temp;
         }

      }
    }


    for(int i=0; i<5; i++)

     printf("%d",*(p+i));
    getch();
}


