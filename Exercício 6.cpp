#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/* Solicite dois n�meros para o usu�rio e imprima o resultado da soma de todos os n�meros existentes entre eles:
Digite o n�mero 1: 1
Digite o n�mero 2: 10
Soma: 55 */ 
	
int main (){
	//Declara as vari�veis e seta o teclado pt-BR
	int a, b, c, d = 0;
	int soma;
	setlocale(LC_ALL,"");
	
	//Solicita informa��es para o usu�rio
	printf("\n\n\n\n");
	printf("\t\t\t     Digite um n�mero: ");
	scanf("%d", &a);
	printf("\n");
	printf("\t\t\t    Digite outro n�mero: ");
	scanf("%d", &b);
	c = a;
	
	//Soma dos n�meros
	for(a; a <= b; a++){
		soma += a;
	}
	//Exibi a soma dos n�meros
	printf("\n\n");
	printf("\t\t     A soma total desses n�meros � de: %d", soma);
	
	//Pause do software e retorna o valor '0' se tudo ocorreu da forma correta
	printf("\n\n\n\n\n\n\n\n\n\n");
	system("pause");
	return 0;
}
