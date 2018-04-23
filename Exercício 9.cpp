#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <locale.h>
int main (){
    int a, i, j, numeroLinha = 0, numeroAtual = 0;
    setlocale (LC_ALL, "");
   
    printf ("\t\t\tDigite um valor inteiro: ");
    scanf ("%d", &a);
	printf("\n");

    for (i = 0; i <= a; i++){
        for( j = 0; j <= numeroLinha; j++ ){
              numeroAtual++; 
              printf ("%d", numeroAtual);
              
			if (numeroAtual == a){
            	printf ("\n\n");
            	system ("pause");
				return 0;
        	}       
        }          
		printf ("\n");
        numeroLinha++;
    } 
}
