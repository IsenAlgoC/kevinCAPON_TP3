#include <stdlib.h>
#include <stdio.h>
#include <stdbool.h>
#include <conio.h>

int main() {
    float note = 0;
    float* ptnote = &note;
    int i = 0;
    float tableau[30];
    unsigned int valids = 0;
    unsigned int abs = 0;
    char pass;
    char* ptpass = &pass;
    float notmax = 0;
    float notmin = 20;
    float moy = 0;
    float somme = 0;


    for (i = 0; i < 3; i++) {
        printf("Entrez la note no %d :", i + 1);
        scanf("%f", ptnote);
        if (note < 20 && note > 0) {
            tableau[i] = note;
            valids = valids + 1;
        }
        else {
            printf("Note invalide. Pour marquer l'eleve absent : A, tout autre reponse arretera la saisie de notes.");
            scanf("%s", ptpass);
            if (pass == 65) {
                abs = abs + 1;
                tableau[i] = -1;
                pass = 0;
            }
            else {
                i = 30;
                printf("Fin de la saisie des notes \n");
            }
        }
    }

    for (i = 0; i < 30; i++) {
        somme = somme + tableau[i];
    }
    moy = (somme + abs) / (valids);
    printf("%d notes valides et %d absences qui font une moyenne de %f", valids, abs, somme);
}