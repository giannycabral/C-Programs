#include <stdio.h>

int main(){
	float nota;
	
	printf("Digite a nota:");
	scanf("%f",&nota);
	
	if (nota >= 6){
		printf("Aprovado\n");
	}else{
		printf("Reprovado\n");
	}
	
	return 0;
}
