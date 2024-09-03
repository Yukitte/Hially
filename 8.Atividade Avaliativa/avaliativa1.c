#include <stdio.h>

int validaQuantidade(int qtdPecas);
float calculaSalario(int qtdPecas);

int main() {
    int qtdPecas, saida;

    do {
        printf("Digite a quantidade de peças fabricadas: ");
        scanf("%d", &qtdPecas);

        if (validaQuantidade(qtdPecas)) {
            float salarioTotal = calculaSalario(qtdPecas);
            printf("O salário do funcionário é: R$%.2f\n", salarioTotal);
        } else {
            printf("Quantidade de peças inválida. Tente novamente.\n");
        }

        printf("Outro funcionário? (Sim - 1 / Não - 2): ");
        scanf("%d", &saida);

    } while (saida != 2);

    return 0;
}


int validaQuantidade(int qtdPecas) {
    return qtdPecas >= 0; 
}


float calculaSalario(int qtdPecas) {
    const float salarioBase = 600.0;
    float adicional = 0.0;

   if (qtdPecas > 50) {
        if (qtdPecas <= 80) {
            adicional = (qtdPecas - 50) * 0.50;
        } else {
            adicional = (80 - 50) * 0.50 + (qtdPecas - 80) * 0.75;
        }
    }   
    return salarioBase + adicional;
}

