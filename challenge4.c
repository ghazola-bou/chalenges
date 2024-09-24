#include <stdio.h>

int main() {
   float ms,km;
   printf(" la vitesse en kilomètres par heure (km/h) :");
   scanf("%f",&km);
   ms = km * 0.27778;
   printf("%f",ms);
    return 0;
}