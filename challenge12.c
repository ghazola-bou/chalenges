#include <stdio.h>
#include <math.h>

int main() {
     int a,b,c,d,n;
     printf("Nombre :");
     scanf("%d",&n);
     a = n/1000;
     b = (n/100)%10;
     c = (n/10)%10;
     d = n %10;
     printf("%d %d %d %d",d,c,b,a);


    return 0;
}