#include <stdio.h>
#include <conio.h>

void main(){
	int numfav, continuar= 1, genero, contpar, i = 0, saldoneg = 0, num = 0;
	float saldo, soma;
	
	while(continuar == 1){
	printf("Informe o seu numero inteiro preferido: ");
	scanf("%d", &numfav);
	printf("Informe seu saldo bancario: ");
	scanf("%f", &saldo);
	printf("Informe o sexo 1-M ou 2-F: ");
	scanf("%d", &genero);
	num++;
	if(numfav % 2 == 0){
		printf("\n Numero Par");
	}
	else{
		printf("\n Numero impar");
	}
	if(saldo > 0){
		printf("\n Numero positivo");
	}
	else{
		printf("\n Numero negativo");
	}
	if(numfav % 2 == 0){
		i++;
	}
	if(saldo < 0){
		saldoneg++;
	}
	if(soma += saldo){
	}


	
	printf("\n deseja continuar? 1-sim ou 2-nao: ");
	scanf("%d", &continuar);
	}
	printf("\n Numeros pares: %d", i);
	printf("\n Quantos usuarios tem saldo negativo: %d", saldoneg);
	printf("\n Numero de participantes: %d", num);
	printf("\n Saldo de todos: %.2f", soma);
}
