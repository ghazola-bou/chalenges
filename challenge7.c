#include <stdio.h>

int main() {
     float num1,num2,num3,moyene;
     printf("one number :");
     scanf("%f",&num1);
     printf("twe number :");
     scanf("%f",&num2);
     printf("tree number :");
     scanf("%f",&num3);
     moyene = (num1*2) +(num2 * 3) + (num3 * 5)/10;
     printf("%.2f",moyene);

    return 0;
}