#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*Solicite para o usu�rio uma palavra e escreva ela separada por espa�os entre cada um dos caracteres. Exemplo:
	Digite a palavra: inconstitucionalissimamente
	Resultado: i n c o n s t i t u c i o n a l i s s i m a m e n t e */
            
int main (){
	//Declara as vari�veis e seta o teclado pt-BR
	char palavra[30], espaco=' ';
	int i = 0, tamanhoPalavra;
	setlocale(LC_ALL,"");
	
	//Solicita as informa��es para o usu�rio
	printf("Digite uma palavra: ");
	gets(palavra);
	tamanhoPalavra = strlen(palavra);
	printf("Palavra com espa�os: ");
	
	//Parte funcional do software
	for(i = 0; i < tamanhoPalavra; i++ ){
		if(i <= tamanhoPalavra){
		   printf("%c", espaco);
	       printf("%c", palavra[i]);

		} 
	}
	
	//Pause do sistema
	printf("\n\n");
	system("pause");
	return 0;
}



	
