#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/* Solicite para o usu�rio uma frase e elimine os espa�os em branco da frase. Exemplo:
	Digite a frase: The quick brown fox jumps over the lazy dog
            Resultado: Thequickbrownfoxjumpsoverthelazydog */
    
int main (){
	char palavra[30], espaco= 8;
	int i = 0, tamanhoPalavra;
	setlocale(LC_ALL,"");
	
	//Solicita as informa��es para o usu�rio
	printf("Digite uma palavra: ");
	gets(palavra);
	tamanhoPalavra = strlen(palavra);
	printf("Palavra sem espa�os: ");
	
	//Parte funcional do software
	for(i = 0; i < tamanhoPalavra; i++ ){
		if(palavra[i] == 32){
		   printf(" ");	
		   printf("%c", 8);

		}else 
		printf("%c", palavra[i]);
	} 
	//Pause do sistema
	printf("\n\n");
	system("pause");
	return 0;
}

