#include <stdio.h>
#include <math.h>

int maior(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int main() {
    int x, y;
    int resultado;

    printf("Digite dois números: ");
    scanf("%d %d", &x, &y);

    resultado = maior(x, y);
    printf("O maior número é: %d", resultado);

    return 0;
}
