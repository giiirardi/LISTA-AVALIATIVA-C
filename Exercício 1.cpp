#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* 
Escreva um programa que solicite para o usuário uma String e informe para o usuário: 
Total de caracteres
Total de vogais
Total de letras
Total de consoantes
Total de números
Total de consoantes */

/* Achando uma vogal errada*/ 

int main (){
	char palavra [100];  
	int valor;
	int i, contadorLetras = 0, tamanho, contadorVogais = 0, contadorNumeros = 0, contadorCaracteresEspeciais = 0; 
	setlocale(LC_ALL,"");
	
	//Total de caracteres
	printf("Digite um texto (sem acentos): ");
	gets(palavra);

	//Total de Vogais
    tamanho = strlen(palavra);
	for(i = 0; i < tamanho; i++){
		if(((palavra[i] =='a') || (palavra[i] =='e') || (palavra[i] =='i') || (palavra[i] =='o') || (palavra[i] =='u')) ||
		    (palavra[i] =='A') || (palavra[i] =='E') || (palavra[i] =='E') || (palavra[i] =='O') || (palavra[i] =='U')){
			contadorVogais++;
		}else {
				if(((palavra[i] >='a') && (palavra[i] <'z')) || ((palavra[i] >='A') && (palavra[i] <='Z'))) {
					contadorLetras++;
			    } else {
					if((palavra[i] >='0') && (palavra[i] <='9')) {	
						contadorNumeros++;
					} else {
						contadorCaracteresEspeciais++;
					}	    	
			    }
			
		}
		//printf("\n[caracter -> %c] [vogal -> %d] [letra -> %d] [numero -> %d] [epecial ->%d]",palavra[i],contadorVogais,contadorLetras,contadorNumeros,contadorCaracteresEspeciais );
	}
	printf("\n\n [Vogal     -> %d] \n [Consoante -> %d]\n [Numero    -> %d]\n [Especial  -> %d]",contadorVogais,contadorLetras,contadorNumeros,contadorCaracteresEspeciais );
	printf("\n\n");	
}

