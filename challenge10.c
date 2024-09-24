#include <stdio.h>
#include <math.h>

int main() {
    float r,volume;
      const float a = 3.14;
      printf(" Volume d'une sphère :");
      scanf("%f",&r);
      volume = (4.0/3.0) * a * pow(r,3);
      printf("%.2f",volume);


    return 0;
}