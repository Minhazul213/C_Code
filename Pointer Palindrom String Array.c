#include <stdio.h>
#include <string.h>
void main()
{
    char str[]="man";
    int i,b;
    char *p;
      p=&str;
    int l=strlen(str);
       b=1;
    for(i=0; i<l; i++)
    {
        if(*(p+i)!=*(p+l-i-1))
        {
            b=0;
            break;
        }


    }
    if(b==1)
    printf("pa");
    else
     printf("not");

}
