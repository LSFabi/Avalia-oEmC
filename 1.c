#include <stdio.h>
#include <conio.h>

void main(){
	int num3, func, continuar = 1;
	float num1, num2, sub, div, soma, mult;
	
	while(continuar == 1){
	printf("Informe o valor real A: ");
	scanf("%f", &num1);
	printf("Informe o valor real B: ");
	scanf("%f", &num2);
	printf("Informe o valor inteiro C: ");
	scanf("%d", &num3);
	printf("\n 1 - subtracao; 2 - divisao, 3 - soma e 4 - multiplicacao: ");
	scanf("%d", &func);
	if(func == 1){
		sub = num1 - num2 - num3;
			printf("\n Subtracao dos numeros: %.2f", sub);
	}
	if(func == 2){
		div = (num1 + num2 + num3) / 3;
			printf("\n Divisao dos numeros: %.2f", div);
	}
	if(func == 3){
		soma = num1 + num2 + num3;
			printf("\n Soma dos numeros: %.2f", soma);
	}
	if(func == 4){
		mult = num1 * num2 * num3;
			printf("\n Multiplicacao dos numeros: %.2f", mult);
	}
	if(func == 0){
		printf("\n Opcao invalida!!!");
	}
	printf("\n Deseja continuar 1-s ou 2-n: ");
	scanf("%d", continuar);
	}




	
}
