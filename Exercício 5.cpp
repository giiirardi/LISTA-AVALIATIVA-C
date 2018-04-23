#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/* Solicite para o usuário uma frase e imprima ela em maiúscula e minúsculas sem usar funções prontas do C. Exemplo:
	Digite a frase: The Quick Brown Fox Jumps Over The lazy Dog
            Em maiúscula: THE QUICK BROWN FOX JUMPS OVER THE LAZY DOG */


int main(){
	//Seta as variáveis e seta o teclado para pt-BR
	setlocale(LC_ALL,"");
	char frase[100], letraMaiuscula[100], letraMinuscula[100];
	int i = 0, tamanhoFrase;

	//Solicita uma frase para o usuário	
	printf("Escreva uma frase: ");
	gets(frase);
	tamanhoFrase = strlen(frase);
	printf("\n");

	//Parte funcional do software
	printf("Resultado maiúsculas: ");
	for (int i = 0; i < tamanhoFrase; i++){
		if (frase[i] > 64 && frase[i] < 90 ){
			printf("%c",frase[i]);
		
		}else if( frase[i] > 96 && frase[i] < 122 ){
				letraMaiuscula[i] = frase[i] - 32;
				printf("%c",letraMaiuscula[i]);
		}
	}
	
	printf("\nResultado minúsculas: ");
	for (int i = 0; i < tamanhoFrase; i++){
		if (frase[i] > 64 && frase[i] < 90){
			letraMinuscula[i] = frase[i] + 32;
			printf("%c",letraMinuscula[i]);
		
		}else if( frase[i] > 96 && frase[i] < 122 ){
				printf("%c",frase[i]);
		}	
	}
	//Pausa o sistema e retorna o valor 0 indicando que está tudo certo.	
	printf("\n\n");
	system("pause");
	return 0;
}
