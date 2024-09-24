#include <stdio.h>

int main() {
    char nom[10];
    char  prenom[10];
     char six;
     char email[20];
     int age;
    printf("nom :");
    scanf("%s",&nom);
    printf("prénom :");
    scanf("%s",&prenom);
    printf("six :");
    scanf(" %c",&six);
    printf("email :");
    scanf("%s",&email);
    printf("age :");
    scanf("%d",&age);
    printf("nom %s ,",nom);
    printf("prenom %s ,",prenom);
    printf("six %c ,",six);
    printf("email %s ,",email);
    printf("age %d .",age);

}