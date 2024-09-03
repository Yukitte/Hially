#include <stdio.h>

#define SALARIO_MINIMO 1400.0

typedef struct {
    char sexo;
    double salario;
} Assalariado;

void classificarAssalariado(Assalariado assalariado) {
    printf("\nSalário: R$%.2f", assalariado.salario);
    
    if (assalariado.salario > SALARIO_MINIMO) {
        printf("\nClassificação: Acima do salário mínimo");
    } else if (assalariado.salario < SALARIO_MINIMO) {
        printf("\nClassificação: Abaixo do salário mínimo");
    } else {
        printf("\nClassificação: Igual ao salário mínimo");
    }

    printf("\nSexo: %s", (assalariado.sexo == 'M') ? "Masculino" : "Feminino");
}

int main() {
    int numAssalariados;
    printf("Digite o número de assalariados: ");
    scanf("%d", &numAssalariados);

    for (int i = 0; i < numAssalariados; i++) {
        Assalariado assalariado;
        
        printf("\nDigite o sexo do assalariado (M/F): ");
        scanf(" %c", &assalariado.sexo);

        printf("Digite o salário do assalariado: ");
        scanf("%lf", &assalariado.salario);

        // Verifica se o salário é maior que R$1,00
        if (assalariado.salario > 1.0) {
            classificarAssalariado(assalariado);
        } else {
            printf("\nSalário inválido para o assalariado %d. Deve ser maior que R$1,00.", i + 1);
        }
    }

    return 0;
}
