#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/* Fa�a um programa que solicite 10 n�meros para o usu�rio digitar e imprima o resultado da soma dos n�meros. */ 
	
int main (){
	//Declara as vari�veis e seta o teclado pt-BR
	int i = 1, numero, a, b;
	setlocale(LC_ALL,"");
	
	//Soma dos n�meros
	for(i = 1; i < 11; i++){
		printf("Digite o n�[%d]: ", i);
		scanf("%d", &numero);
		a = numero;
		b = b + a; 
	}
	//Exibi a soma dos n�meros	
	printf("A soma desses n�mero � : %d", b - 1);
	
	//Pause do software e retorna o valor '0' se tudo ocorreu da forma correta
	printf("\n\n\n");
	system("pause");
	return 0;
}


