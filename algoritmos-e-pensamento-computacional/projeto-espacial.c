// Aluno: Filipe Pires Oliveira
// RGM: 47668342

#include <stdio.h>

int main()
{
    int codigoCadete, etapa, pontos, total, continuar;
    float media;
    
    printf("====== MISSÃO ORBITAL ======\n");

    do{
        printf("Código do cadete: ");
        scanf("%d", &codigoCadete);
        total=0;

        for(etapa=1; etapa<=3; etapa++){
            printf("Pontuação da etapa %d: ", etapa);
            scanf("%d", &pontos);

            while(pontos < 0 || pontos > 100){
                printf("Valor invalido! Digite novamente: ");
                scanf("%d", &pontos);
            }
            total = total + pontos;
        }
        printf("--------- RESULTADO ---------\n");
        
        media = total / 3.0;
        
        if(total ==300) {
            printf("PONTUAÇÃO MÁXIMA!\n");
        }
        printf("O valor total é: %d\n", total);
        printf("A média é: %.2f\n", media);

        if (media >=85.0){
            printf("COMANDANTE DA MISSÃO\n");
        }else if (media >=70.0){
            printf("PILOTO APROVADO\n");
        }else if (media >=50.0){
            printf("CADETE EM RECUPERAÇÃO\n");
        }else {
            printf("TREINAMENTO REINICIADO\n");
        }
        
        printf("-------------------------------------\n");
        printf("Avaliar outro cadete? 1-Sim | 0-Não\n");
        scanf("%d", &continuar);

    }while(continuar==1);

    return 0;
}
