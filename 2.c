#include <stdio.h>
#include <conio.h>

void main(){
	int i, cor, genero, somamulher = 0, contcastanho = 0;
	float salario, maiorsalario = 0, menorsalario = 0, somasalario = 0;
	
	for(i = 0; i < 4; i++){
		printf("Informe a cor do olho 1-azul, 2-verde, 3-preto ou 4-castanho: ");
		scanf("%d", &cor);
		printf("Informe o sexo 1-masculino ou 2-feminino: ");
		scanf("%d", &genero);
		printf("Informe o salario: ");
		scanf("%f", &salario);
		if(cor == 2){
			maiorsalario = salario;
		}
		if(salario > maiorsalario)
		maiorsalario = salario;
		if(genero == 1){
			menorsalario = salario;
		}
		if(menorsalario > salario)
		menorsalario = salario;
		if(genero == 2){
			somasalario += salario;
			somamulher++;		
		}
		if(cor == 4){
			contcastanho++;
		}
	}
	printf("\n Maior salario dos olhos verdes: %.2f", maiorsalario);
	printf("\n Menor salario masculino: %.2f", menorsalario);
	printf("\n Media salarial feminina olhos azul:%.2f ", somasalario / somamulher);
	printf("\n Contagem de olhos castanhos: %d", contcastanho);	
}
