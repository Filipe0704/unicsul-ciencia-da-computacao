#include <stdio.h>
#include <math.h>

int main()
{
    float largura, comprimento, valor, total_area, total_caixas, total_valor;
    
    printf("Qual é a largura da área em Metros? ");
    scanf("%f", &largura);
    
    printf("Qual é o comprimento da área em Metros? ");
    scanf("%f", &comprimento);
    
    printf("Qual o valor de cada caixa? ");
    scanf("%f", &valor);
    
    total_area = largura*comprimento;
    total_caixas = ceil(total_area / 2.5);
    total_valor = total_caixas*valor;
    
    printf("Área total pra ser revestida é %.2fm²\n", total_area);
    printf("Quantidade de caixas necessárias é %.2f\n", total_caixas);
    printf("Custo total da compra é  %.2f\n", total_valor);
   
    return 0;
}
