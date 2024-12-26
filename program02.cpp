#include<stdio.h>

int main(){
    int num1, num2;
    
    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &num1);
    
    printf("Digite o segundo numero inteiro:");
    scanf("%d", &num2);
    
    printf("A soma é %d\n",num1+num2);
    printf("A subtração é %d\n",num1-num2);
    printf("A Multiplicação é %d\n",num1*num2);
    if(num2 != 0)
        printf("A Divisão é %d\n",num1/num2);
    else
        printf("Não é possivel dividir por zero.\n");
    return 0;
}
