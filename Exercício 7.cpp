#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <math.h>
/* Faça um programa que solicite 10 números para o usuário digitar e imprima o resultado da soma dos números. */ 
	
int main (){
	//Declara as variáveis e seta o teclado pt-BR
	int i = 1, numero, a, b;
	setlocale(LC_ALL,"");
	
	//Soma dos números
	for(i = 1; i < 11; i++){
		printf("Digite o nº[%d]: ", i);
		scanf("%d", &numero);
		a = numero;
		b = b + a; 
	}
	//Exibi a soma dos números	
	printf("A soma desses número é : %d", b - 1);
	
	//Pause do software e retorna o valor '0' se tudo ocorreu da forma correta
	printf("\n\n\n");
	system("pause");
	return 0;
}


