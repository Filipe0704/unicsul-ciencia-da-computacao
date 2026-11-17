
#include <stdio.h>

int main()
{
    char tipoHospedagem;
    int quantidadeDiarias;
    float valoresDiaria, valorTotal;
    
    printf("Qual o tipo de hospedagem (S - D - T)? ");
    scanf("%c", &tipoHospedagem);
    
    printf("Qual a quantidade de diárias? ");
    scanf("%d", &quantidadeDiarias);
    
    switch (tipoHospedagem){
        case 'S':
        case 's':
            valoresDiaria = 300.0f;
            break;
            
        case 'D':
        case 'd':
            valoresDiaria = 450.0f;
            break;
            
        case 'T':
        case 't':
            valoresDiaria = 500.0f;
            break;
            
            default:
            printf("\n Tipo inválido\n");
    }
    
    valorTotal = valoresDiaria * quantidadeDiarias;
    
    printf("\n O valor total da hospedagem é: %.2f", valorTotal);
    
    return 0;
}
