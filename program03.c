#include<stdio.h>

int main(){
	int idade;
	
	printf("Digite sua idade:");
	scanf("%d",&idade);
	
   if(idade >=18){
   	printf("Voc� � maior de idade");
   }else{
   	printf("Voc� � menor de idade");
   }
   
   return 0;
	
}
