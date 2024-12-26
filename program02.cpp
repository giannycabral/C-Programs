#include<stdio.h>

int main(){
    float num1, num2;
    
    printf("Digite o primeiro número real:");
    scanf("%f", &num1);
    
    printf("Digite o segundo número real:");
    scanf("%f", &num2);
    
    printf("A soma é %.2f\n",num1+num2);
    printf("A subtração é %.2f\n",num1-num2);
    printf("A Multiplicação é %.2f\n",num1*num2);
    if(num2 != 0)
        printf("A Divisão é %.2f\n",num1/num2);
    else
        printf("Não é possível dividir por zero.\n");
    return 0;
}
