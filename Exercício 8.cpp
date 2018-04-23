#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/* Escreva um programa em C que solicite para o usuário a quantidade de asteriscos deseja e escreva eles conforme o exemplo:. */ 
// * = 42
	
int main (){
	//Declara as variáveis e seta o teclado pt-BR
	int i = 0, k = 0, valor;
	setlocale(LC_ALL,"");
	
	//Solicita valores ao usuário
	printf("\t\t\tDigite um valor em inteiros: ");
	scanf ("%d", &valor);
	
	//Parte funcional do software
	for(i = 0; i < valor; i++){
		for(k = 0; k <= i; k++)
			printf("%c", 42);
		//	printf(" --> [%d] - [%d] ", k , i);		
			printf("\n");
	}

	//Pause do sistema e retorna o valor '0' caso não haja erro
	printf("\n\n");	
	system("pause");
	return 0;
}
