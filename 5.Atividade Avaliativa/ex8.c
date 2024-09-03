#include <stdio.h>
#include <math.h>

int main() {
    float salario, totals = 0.0, medias;
    int filhos, totalf = 0, totalp = 0, sal100 = 0;
    float maiores = 0.0;
    
    do {
        printf("Digite o salário (ou um valor negativo para encerrar): ");
        scanf("%f", &salario);

        if (salario >= 0) {
            totals += salario;
            totalp++;

            printf("Filhos: ");
            scanf("%d", &filhos);
            totalf += filhos;

            if (salario <= 100.0) {
                sal100++;
            }

            if (salario > maiores) {
                maiores = salario;
            }
        }
    } while (salario >= 0);

    if (totalp > 0) {
        medias = totals / totalp;
    } else {
        medias = 0.0;
    }

    printf("Média do salário : %.2f\n", medias);
    printf("Média do número de filhos: %.2f\n", (float)totalf / totalp);
    printf("Maior salário: %.2f\n", maiores);
    printf("Pessoas com salário até R$100,00: %.2f%%\n", (float)sal100 / totalp * 100);

    return 0;
}
