#include <stdio.h>
#include <stdlib.h>

int main(){
    char nomeProduto[50];
    int quantidade;
    float precoUnitario,valorTotal,valorTotalDia=0.0;

     printf("Digite o nome do produto:");
     scanf("%s",&nomeProduto);

     printf("Digite a quantidade vendida :");
     scanf("%d",&quantidade);

     printf("Digite o preco unitario :");
     scanf("%f",&precoUnitario);

     valorTotal = quantidade*precoUnitario;
     printf("O valor total da venda do produto %s : R$ %.2f\n",nomeProduto,valorTotal);

     valorTotalDia = valorTotalDia + valorTotal;
     printf("O valor total arrecadado no dia : %.2f\n",valorTotalDia);

     return 0;
}


















































