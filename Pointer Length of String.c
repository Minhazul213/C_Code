#include<stdio.h>

int main() {
  char str[20], *p;
  int i = 0;
  printf("Enter Any string below  chars : ");
  gets(str);
  p = str;

  while (*p != '\0') {
    i++;
    p++;
  }
  printf("Length of String : %d",i);

  return 0;
}
