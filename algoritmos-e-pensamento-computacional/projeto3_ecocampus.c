#include <stdio.h>
#include <string.h>

void imprimirRelatorio(FILE *destino, int qtd, double total, double media,
                       const char *localMaior, double maior, int alertas) {
    fprintf(destino, "========== ECOCAMPUS ==========\n");
    fprintf(destino, "Locais analisados: %d\n", qtd);
    fprintf(destino, "Consumo total: %.2f litros\n", total);
    fprintf(destino, "Consumo medio: %.2f litros\n", media);
    if (qtd > 0) {
        fprintf(destino, "Maior consumo: %s - %.2f litros\n", localMaior, maior);
    } else {
        fprintf(destino, "Maior consumo: nenhum registro valido\n");
    }
    fprintf(destino, "Locais em alerta: %d\n", alertas);
    fprintf(destino, "================================\n");
}

int main() {
    FILE *entrada;
    FILE *saida;
    char local[50];
    double consumo, limite;

    int qtd = 0;
    double total = 0;
    double media = 0;
    double maior = 0;
    char localMaior[50] = "";
    int alertas = 0;

    entrada = fopen("consumo_campus.txt", "r");

    if (entrada == NULL) {
        printf("Erro: nao foi possivel abrir o arquivo consumo_campus.txt\n");
        return 1;
    }


    while (fscanf(entrada, "%49s %lf %lf", local, &consumo, &limite) == 3) {
        qtd++;
        total += consumo;

        if (qtd == 1 || consumo > maior) {
            maior = consumo;
            strcpy(localMaior, local);
        }

        if (consumo > limite) {
            alertas++;
        }
    }

    if (qtd > 0) {
        media = total / qtd;
    }

    saida = fopen("relatorio_consumo.txt", "w");
    if (saida == NULL) {
        printf("Erro: nao foi possivel criar o arquivo relatorio_consumo.txt\n");
        fclose(entrada);
        return 1;
    }

    imprimirRelatorio(stdout, qtd, total, media, localMaior, maior, alertas);
    imprimirRelatorio(saida, qtd, total, media, localMaior, maior, alertas);

    fclose(entrada);
    fclose(saida);
    return 0;
}