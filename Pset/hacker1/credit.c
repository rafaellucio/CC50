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
	long long int textCard = 0;

	printf("***** Credito Furado ******");
	printf("\nVamos validar seu cartão de credito!!");
	printf("\nInforme o numero do seu cartao! ATENCAO somente numeros!");

	printf("\n\nNumeros do cartao: ");
	scanf("%lld", &textCard);

	printf("Valor digitado: %lld \n", textCard);
}
