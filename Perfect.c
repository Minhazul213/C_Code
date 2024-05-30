#include<stdio.h>
#include<conio.h>
int main()
{

    int num, rem, sum = 0;

    printf("Enter a number :");//if The number is 28 then will be perfect number
    scanf("%d",&num);//if The number is 29 then will not be perfect number

    for( int i = 1; i < num; i++)
    {
        rem = num % i;
        if (rem == 0)
        {
            sum = sum + i;
        }
    }
    if (sum == num)
        printf(" %d is a Perfect Number",num);
    else
        printf("%d is not a Perfect Number",num);
    getch();
}
