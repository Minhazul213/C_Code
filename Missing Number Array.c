#include<stdio.h>
#include<conio.h>
int checkDuplicate( int arr[], int num ,int m)
{
    int i;
    int counter=0;

    for(i=0; i<num; i++)
    {
        if(arr[i]==m )
        {
            counter++;
        }

    }
    return counter;
}
int main()
{
    int num,i,j,sum=0;

    printf("How many number of array :");
    scanf("%d",&num);
    int arr[num];

    for(int i=0; i<num-1; i++)
    {
        printf(" Array [%d] :",i);
        int temp;
        scanf("%d",&temp);
        if(temp>num)
        {
            printf("Please Enter Any Array Element From 1 to %d \n", num);
            i--;
        } else {
            arr[i]=temp;
            if(checkDuplicate(arr, num, temp) > 1) {
                printf("Duplicate item found! Can't input the same number \n");
                i--;

            }
        }

    }

    printf("Enter Array :");
    for(int i=0; i<num-1; i++)
    {
        printf("%2d",arr[i]);
        sum+=arr[i];
    }

    int m =(num*(num+1))/2;
    int result=m-sum;
    printf("\nMissing Number :%d",result);




    getch();
}
