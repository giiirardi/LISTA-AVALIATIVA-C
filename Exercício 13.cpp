#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/* Solicite para o usu�rio uma frase e conte quantas palavras a frase possui (palavras s�o separadas por um espa�o em branco): */

int main (){
	//Declara as vari�veis e seta o teclado pt-BR
	char frase [100];
	int i = 0, k = 1, tamanhoFrase;
	setlocale(LC_ALL,"");
	
	//Solicita as informa��es para o usu�rio
	printf("\t\t\tDigite uma frase: ");
	gets(frase);
	tamanhoFrase = strlen(frase);
	
	//Parte funcional do software
	for(i = 0; i <= tamanhoFrase; i++ ){
		if(frase[i] == ' '){
		   k++;	
		}			
	}	
	printf("\n");
	printf("\t\t\tA quantidade de palavras �: %d", k);
	printf("\n\n");
	system("pause");
	return 0;
}
