#include <stdio.h>

float calcularImc(float alturaMetros, int pesoKg) {
    return pesoKg / (alturaMetros * alturaMetros);
}

void classificarImc(float imc) {
    if (imc < 16.9) {
        printf("Muito abaixo do peso\n");
    } else if (imc >= 17.0 && imc < 18.4) {
        printf("Abaixo do peso\n");
    } else if (imc >= 18.5 && imc < 24.9) {
        printf("Peso normal\n");
    } else if (imc >= 25 && imc < 29.9) {
        printf("Acima do peso\n");
    } else if (imc >= 30 && imc < 34.9) {
        printf("Obesidade grau I\n");
    } else if (imc >= 35.0 && imc < 40) {
        printf("Obesidade grau II\n");
    } else {
        printf("Obesidade grau III\n");
    }
}

float calcularMbH(float alturaCm, int pesoKg, int idade) {
    return 88.362 + (13.397 * pesoKg) + (4.799 * alturaCm) - (5.677 * idade);
}

float calcularMbM(float alturaCm, int pesoKg, int idade) {
    return 655 + (9.6 * pesoKg) + (1.8 * alturaCm) - (4.7 * idade);
}


int main() {
    float alturaMetros, alturaCm, mb, imc;
    int pesoKg, idade;
    char sexo;

    printf("Digite o Peso (em kg): ");
    scanf("%d", &pesoKg);

    printf("Digite a Altura (em metros): ");
    scanf("%f", &alturaMetros);
    alturaCm = alturaMetros * 100.0;

    printf("Digite o sexo (H para homem, M para mulher): ");
    scanf(" %c", &sexo);

    printf("Digite sua Idade: ");
    scanf("%d", &idade);

    if (sexo == 'H') {
        mb = calcularMbH(alturaCm, pesoKg, idade);
    } else if (sexo == 'M') {
        mb = calcularMbM(alturaCm, pesoKg, idade);
    } else {
        printf("Sexo não reconhecido\n");
        return 1; // Encerrando o programa com erro
    }
    printf("\n------------------------------------------\n");
    imc = calcularImc(alturaMetros, pesoKg);
    printf("\nIMC: %.2f - ", imc);
    classificarImc(imc);
    
    printf("Metabolismo Basal (MB): %.2f kcal/dia ", mb);
    

    return 0;
}
