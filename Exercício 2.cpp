#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>
#include <ctype.h>

/* Escreva um programa que solicite para o usu�rio uma String e imprima o conte�do das posi��es pares em mai�scula e das posi��es �mpares em min�sculas (lembrando 
que o primeiro elemento � ZERO, ou seja, par). Exemplo:
	Digite uma palavra: navios
            Resultado: NaViOs */
			

int main (){
	//Seta as vari�veis e seta o teclado para pt-BR
	char letrasMaiusculas [100];
	int i = 0 , k = 0, tamanhoPalavra;
	setlocale(LC_ALL,"");
	
	//Solicita uma frase para o usu�rio
	printf("\n\n\n\n\n\n\n\n\n\n");
	printf("\t\t    Digite uma frase: ");
	gets(letrasMaiusculas);
	tamanhoPalavra = strlen(letrasMaiusculas) -1;
	printf("\n\t\t      Resultado: ");
	
	//Parte funcional do software
	for(i = 0; i <= tamanhoPalavra; i++){
		if(i %2== 0){
			putchar(toupper(letrasMaiusculas[i]));
		} else 
			putchar(tolower(letrasMaiusculas[i]));	
	}
	
	//Pausa o sistema e retorna o valor 0 indicando que est� tudo certo.
	printf("\n\n\n\n\n\n\n");
	system("pause");
	return 0;
} 

