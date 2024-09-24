#include <stdio.h>
#include <math.h>

int main() {
     float num1,num2,num3,meynne;
     printf("num1 :");
     scanf("%f",&num1);
    printf("num2 :");
     scanf("%f",&num2);
      printf("num3 :");
     scanf("%f",&num3);
     meynne = pow(num1 * num2 *num3, 1.0/3.0);
     printf("%.2f",meynne);


    return 0;
}