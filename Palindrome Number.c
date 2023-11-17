#include<stdio.h>
#include<conio.h>
int main()
{
    int num,c, x,y=0;
    printf("Enter The Any Integer Number :\n");
    scanf("%d",&num);
    c=num;
    while(0 < num)
    {

        x=num%10;
        y=x+(y*10);
        num=num/10;

    }
    if(c==y)
        printf("Number is Palindrome");
    else
        printf("Number is not Palindrome");

    getch();
}
