#include <stdio.h>
#include <conio.h>

int main() {
    int sum=1;
  int *p=&sum;

  for(int i=1;i<=5;i++)
  {
      *p =(*p) * i;

  }
  printf("%d",*p);
  getch();
}

