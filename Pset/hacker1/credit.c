/***************************************************************************
 * credit.c
 *
 * CC50
 * Pset Hacker 1
 *
 * Validando Cartões de Credito.
 *
 ***************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
	char textCard[17];

	printf("\n***** Credito Furado ******");
	printf("\nVamos validar seu cartão de credito!!");
	printf("\nInforme o numero do seu cartao! ATENCAO somente numeros!");

	printf("\n\nNumeros do cartao: ");
	fgets(textCard, 16, stdin);

	printf("Valor digitado: %s \n", textCard);
}
