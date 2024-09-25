#include <stdlib.h>
#include <stdio.h>

int main(int argc, char const *argv[])
{
    char prenom[50]; // Allocation de mémoire pour le prénom
    int age;
    int anneedenaissance;

    printf("Quel est votre prénom ?\n");
    scanf("%49s", prenom); // Limite la saisie à 49 caractères pour éviter le dépassement de tampon

    printf("Quel âge avez-vous ?\n");
    scanf("%d", &age);

    anneedenaissance = 2024 - age;
    printf("%s, si vous êtes né en fin d'année, alors vous êtes né en %d\n", prenom, anneedenaissance);

    return 0;
}