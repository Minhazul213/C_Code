#include <stdio.h>
#include <conio.h>

int main() {
  int a=10;
  int *pt;
  printf("Pointer Example Program : Increment and Decrement Integer\n");
  pt = &a;

  (*pt)++; //Post Increment
  printf("\n[a]:Increment Value of A = %d",* pt);

  ++(*pt); //Pre Increment
  printf("\n[a]:Increment Value of A = %d", *pt);


  (*pt)--; //Post Decrement
  printf("\n[a]:Decrement Value of A = %d", *pt);

  --(*pt); //Pre Decrement
  printf("\n[a]:Decrement Value of A = %d",*pt);

  getch();
}
