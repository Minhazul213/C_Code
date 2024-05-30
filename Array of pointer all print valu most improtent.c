#include<stdio.h>

int main()
{
    int a[]={2,3,4,5,6};
    int *p;
    p=&a;
    /* printf("%d\n",p);// Adress of 0 index,
     printf("%d\n",a+2);//Adress of 0 index
     printf("%d\n",*p);// Valu of 0 index,2
     printf("%d\n",*p+1);// valu of 1 index,3
     printf("%d\n",*p+2);// valu of 2 index,4
     printf("%d\n",*p+3);// valu of 3 index,5
     printf("%d\n",p[0]);// 2
     printf("%d\n",&p[0]);// Adress of 0 index,
     printf("%d\n",p[1]);// 3
     printf("%d\n",p[2]);// 4
     printf("%d\n",p[3]);// 5*/


       for (int i=0; i<5 ;i++)
       {
           printf("%d\n",*p++);//Array of pointer ,2,3,4,5,6,
           //printf("%d\n",*p+i);//Array of pointer ,2,3,4,5,6,
           //printf("%d\n",p[i]); //Array of pointer ,2,3,4,5,6,
          // printf("%d\n",*(p+i));//Array of pointer ,2,3,4,5,6,

       }
}
