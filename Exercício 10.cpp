#include <stdio.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>

/* Solicite para o usu�rio o n�mero de n�veis da �rvore de natal e imprima ela usando o for. */

int main (){
    setlocale (LC_ALL, "");
	int i, k, j, troncoArvore, numero, linha;

	//Solicita informa��es para o usu�rio
    printf ("Informe um n�mero inteiro: ");
    scanf ("%d", &numero);
    printf ("\n\n\n");
    linha = 1;
    k = numero;
    
    //Folhas da �rvore
	for (i = 1; i <= numero; i++){
         for (j = 1; j <= k; j++){
         	 printf (" ");
         } 
		 k--;  	
         for (j = 1; j <= linha; j++){         	
             printf ("*");
         } 
    	printf ("\n");
    	linha = linha + 2;        
    }
    k = numero - 1;
  
  	//Tronco da �rvore  
	for (troncoArvore = 1; troncoArvore <= 3; troncoArvore++){
    	for (j = 1; j < k; j++){
    		printf (" ");
    	}
    	printf ("|||||");
    	printf ("\n");
	}
	
	//Pausa o sistema, muda a cor e retorna o valor '0' caso tudo esteja correto
	printf ("\n\n\n\n"); 
    system("color 04");
    system ("pause");
    return 0;
}
