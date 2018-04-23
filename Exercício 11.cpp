#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/* Imprima a tabuada de 1 a 10 conforme o exemplo */

int main(){
	setlocale(LC_ALL,"");
	int i = 1, k = 1, valor;
	const int contador = 11;
	
	for(i = 1; i <= contador; i++){
		
		if(i == contador){
		   i = 1;
		   k++;  
  		   printf("\n");
	
		} else if(k == contador){
				  break;
		}
		 
	valor = k * i;
	printf("\t\t\t%d x %d = %d\n",k, i, valor);
		
	}
}
