// ------------------------------------------------------------------
// exemple-scanf-6.c
// Fichier d'exemple du livre "Developpement Systeme sous Linux"
// (C) 2000-2010 - Christophe BLAESS -Christophe.Blaess@Logilin.fr
// http://www.logilin.fr
// ------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
	
int main (void)
{
	int	i;
	fprintf(stdout, "Entrez un entier : ");
	if (scanf("%d\n", & i) == 1)
		fprintf(stdout, "Ok i=%d\n", i);
	else
		fprintf(stdout, "Erreur\n");
	return EXIT_SUCCESS;
}
