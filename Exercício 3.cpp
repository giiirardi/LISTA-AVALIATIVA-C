#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
/*Solicite para o usuário uma frase e uma palavra e indique se a palavra existe na frase ou não. Exemplo:
	Digite a frase: The quick brown fox jumps over the lazy dog
	Digite a palavra: brown
    Resultado: a palavra brown FOI encontrada na frase.*/
            
int main (){
	//Declara as variáveis e seta o teclado pt-BR
	char frase[100], palavra[30], troca[30];
	int contador = 0, tamanhoFrase = 0, tamanhoPalavra = 0;
	int contadorPalavra = 0, contadorFrase = 0;
	bool resultado = false;
	setlocale(LC_ALL,"");
	
	//Solicita as informações para o usuário
	printf("\n\n\n\n\n\n\n\n");
	printf("\t\t\tDigite uma frase:");
	fgets(frase, sizeof(frase), stdin);
	tamanhoFrase = strlen(frase);
	strlwr(frase);
	strtok(frase,"\n");
					
	printf("\t\t\tDigite uma palavra:");
	fgets(palavra, sizeof(palavra), stdin);
	tamanhoPalavra = strlen(palavra);
	strlwr(palavra);
	strtok(palavra,"\n");	

	//Parte funcional do software
	for(contador = 0; contador < tamanhoPalavra; contador++){
		contadorPalavra =	contadorPalavra + palavra[contador]; 
	}
		
	for(contador = 0; contador < tamanhoFrase; contador++){
		troca[contador] = frase[contador];
		contadorFrase += troca[contador];
		
		if((frase[contador] == 32) || (frase[contador] == 0)){ 
			if (contadorFrase == contadorPalavra || contadorFrase  == contadorPalavra + 32){
			resultado = true;
			break;
 		 	
			}
				else{
				contadorFrase = 0;
				continue;
				} 
		}
		 
	} 
		
	//Avisa se está certo ou não
	if(resultado == true){
		printf("\n");
		printf("\t\t\tA palavra encontrada é: %s!", palavra);
	} 
	else{
		printf("\n\n");
		printf("\t\t\tNão foi encontrado nenhuma palavra!");
	}

	printf("\n\n");
	system("pause");
	return 0;
}
		



