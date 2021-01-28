#include <stdlib.h>*
#include <stdio.h>
#include <math.h>

#define carre(x) x * x
#define carre2(x) (x) * (x)  // J'ai modifié la macro afin qu'elle fonctionne maintenant avec le Nb + 1.

int main() {
	int Nb = 5;
	printf("%d\n", carre(Nb));
	printf("%d\n", carre(Nb + 1));  // On obtient 11, je pense que le problème vient de la macro.

	printf("%d\n", carre2(Nb));      
	printf("%d\n", carre2(Nb + 1));      // La nouvelle macro fonctionne bien, pour Nb + 1 on obtient 36.
	return(EXIT_SUCCESS);
}