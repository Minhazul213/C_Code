#include <stdio.h>

int main() {
    int num, coyNumer, remainder, sum = 0;
    printf("Enter a three-digit integer: ");//if is input num =371 then number is armostrong
    scanf("%d", &num);//if is input num =372 then number is not armostrong
    coyNumer = num;

    while (coyNumer != 0) {

        remainder = coyNumer % 10;

       sum += remainder * remainder * remainder;


       coyNumer /= 10;
    }

    if (sum == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}

