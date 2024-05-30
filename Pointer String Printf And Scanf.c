#include<stdio.h>
#include<conio.h>
int main()
{
    int n;
       printf("Enter :");
       scanf("%d",&n);
    char ch[n];
     char *p=&ch;

    for(int i=0; i<n; i++)
    {
        scanf("%c",p+i);
    }


    for(int i=0; i<n ; i++)
    {

          printf("%c",*(p+i));
    }

       getch();
}
