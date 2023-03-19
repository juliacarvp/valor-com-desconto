#include <stdio.h> 
#include <stdlib.h>
#include <locale.h> 

int main(){
    setlocale(LC_ALL, "Portuguese");
    float num, desc, res;
    printf("\n--- Lê o valor de um produto e imprime o novo valor, tendo em vista o desconto ---\n");
    printf("Valor do produto: \n");
    scanf("%f",&num);

    printf("Qual a porcentagem do desconto? \n");
    scanf("%f",&desc);
    
    res = num - ((num * desc) /100);
    
    printf("O valor do produto com o desconto fica R$%.2f \n", res);
    return(0);
}
