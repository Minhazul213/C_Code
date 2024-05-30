#include<stdio.h>

int main()
{
    int n;
    printf("Enter array size :");
    scanf("%d",&n);
    int a[n];
    int *p;
    p=&a;
    printf("Enter array Element :");
    for(int i=0; i<n;i++)
    {
        scanf("%d",&p[i]);
        //scanf("%d",(p+i));

    }
    for(int i=0; i<n;i++)
    {
           printf("%d\n",*p++);//Array of pointer ,2,3,4,5,6,
           //printf("%d\n",*p+i);//Array of pointer ,2,3,4,5,6,
           //printf("%d\n",p[i]); //Array of pointer ,2,3,4,5,6,
          //printf("%d\n",*(p+i));//Array of pointer ,2,3,4,5,6,

    }

}

