#include <stdio.h>
#include <stdlib.h>

int main()
{      char nom[50];
    char prenom[50];
    int age;
    char sexe;
    char email[100];


    printf("Entrez votre nom : ");
    scanf("%49s", nom);

    printf("Entrez votre prénom : ");
    scanf("%49s", prenom);

    printf("Entrez votre âge : ");
    scanf("%d", &age);

    printf("Entrez votre sexe (M/F) : ");
    scanf(" %c", &sexe);

    printf("Entrez votre adresse email : ");
    scanf("%99s", email);


    printf("\nInformations personnelles :\n");
    printf("Nom : %s\n", nom);
    printf("Prénom : %s\n", prenom);
    printf("Âge : %d\n", age);
    printf("Sexe : %c\n", sexe);
    printf("Adresse email : %s\n", email);



    return 0;
}
