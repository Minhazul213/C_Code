#include<stdio.h>
int main()
{
   int n=2,m=3,l=4;
   int *p,*q,*r;
   p=&n;
   q=&m;
   r=&l;
   printf("Enter three number :");
     scanf("%d%d%d",&n,&m,&l);
     printf("n=%d, m=%d l=%d ",*p,*q,*r);


     int trem;
      trem=*p;
     *p=*q;
     *q=*r;
     *r=*p;
     *r=trem;
       printf("\n n=%d m=%d l=%d ",*p,*q,*r);



}

