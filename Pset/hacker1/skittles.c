/***************************************************************************
 * skittles.c
 *
 * CC50
 * Pset Hacker 1
 *
 * Quer adivinhar quantos Skittles tem lá?.
 *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

int main(void){
	srand(time(NULL));
	int skittles = rand() % 10;
	int chances = 5;
	int resposta = 0;
	int i = 0;

	printf("\n\n*********  MAQUINA DE SKITTLES  *********");
	printf("\n\nTente advinhar o numero de skittles existentes neste maquina!");
	printf("\nDICA** Os numeros variam de 0 a 10 skittles\n");

	for(i = 0; i < 5; i++){
		printf("\nVocê tem %d chances!", chances);
		printf("\nQuantos skittles temos?: ");
		scanf("%d", &resposta);

		if(resposta == skittles){
			printf("\n\nVoce esta certo! Nom nom nom nom.");
			break;
		}else{
			printf("\n\nHaha! Tente de novo");
			chances--;
		}
	}

	printf("\n\nSkittles: %d\nResposta: %d", skittles, resposta);
	printf("\n\n");
}
