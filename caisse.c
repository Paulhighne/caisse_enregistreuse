#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main() {
	srand(time(0));
	double valeur_a_payer = (double)(rand() % 419 + 10) + (double) (rand() % 100) / 100;
	double paiement;
	printf("Montant a payer : Rs%.2f\n", valeur_a_payer);

	do {
		printf("Entrez votre votre paiement : ");

		scanf("%lf", &paiement);
		
		if(paiement < valeur_a_payer) {
			printf("Montant insuffisant! veuillez payer au moins Rs%.2f\n", valeur_a_payer);
		}
	  } while(paiement < valeur_a_payer);

	printf("Merci! Monnaie a rendre : Rs%.2f\n", paiement - valeur_a_payer);
	return 0;
	} 
