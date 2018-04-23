#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/* Solicite dois números para o usuário e imprima o resultado da soma de todos os números existentes entre eles:
Digite o número 1: 1
Digite o número 2: 10
Soma: 55 */ 
	
int main (){
	//Declara as variáveis e seta o teclado pt-BR
	int a, b, c, d = 0;
	int soma;
	setlocale(LC_ALL,"");
	
	//Solicita informações para o usuário
	printf("\n\n\n\n");
	printf("\t\t\t     Digite um número: ");
	scanf("%d", &a);
	printf("\n");
	printf("\t\t\t    Digite outro número: ");
	scanf("%d", &b);
	c = a;
	
	//Soma dos números
	for(a; a <= b; a++){
		soma += a;
	}
	//Exibi a soma dos números
	printf("\n\n");
	printf("\t\t     A soma total desses números é de: %d", soma);
	
	//Pause do software e retorna o valor '0' se tudo ocorreu da forma correta
	printf("\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}
