#include <stdio.h>

int main() {
    float salarioFixo, valorVendas, valorPorCarro, bonusPorCarro, salarioFinal;
    int numCarrosVendidos;

    printf("Salário fixo: ");
    scanf("%f", &salarioFixo);

    printf("Valor por carro vendido: ");
    scanf("%f", &valorPorCarro);

    printf("Valor total de vendas: ");
    scanf("%f", &valorVendas);

    printf("Número de carros vendidos: ");
    scanf("%d", &numCarrosVendidos);

    bonusPorCarro = valorPorCarro * numCarrosVendidos;
    float comissao = (valorVendas * 5) / 100;
    salarioFinal = salarioFixo + bonusPorCarro + comissao;

    printf("\n------------------------------\n");
    printf("Comissão por carros vendidos: %.3f\n", bonusPorCarro);
    printf("Comissão de 5%% sobre as vendas: %.3f\n", comissao);
    printf("Salário final: %.3f\n", salarioFinal);
    printf("------------------------------\n");

    return 0;
}