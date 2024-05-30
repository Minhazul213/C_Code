#include<stdio.h>
int main()
{
    int n;
    printf("Enter any array number :");
    scanf("%d",&n);
    int arr[n];
    int *p;
    p=&arr;
    for(int i=0; i<n; i++)
       scanf("%d",p++);

    p=&arr;
    for(int i=0; i<n; i++)
    {
        printf("%d",*(p++));
    }
}
