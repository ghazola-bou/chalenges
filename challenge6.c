#include <stdio.h>

int main() {
   float a,b;
   printf("Calcule num A :");
   scanf("%f",&a);
   printf("Calcule num B :");
   scanf("%f",&b);
   printf("%.2f + %.2f = %.2f \n",a,b,a+b);
    printf("%.2f - %.2f = %.2f \n",a,b,a-b);
     printf("%.2f x %.2f = %.2f \n",a,b,a*b);
      printf("%.2f / %.2f = %.2f \n",a,b,a/b);
    return 0;
}