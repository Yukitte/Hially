#include <stdio.h>

int main() {
    int idade, trabalho;

    printf("Escreva respectivamente sua idade e seus anos de trabalho: ");
    scanf("%d %d", &idade, &trabalho);

    if (idade >= 65 || trabalho >= 30 || (idade >= 60 && trabalho >= 25)) {
        printf("APOSENTADO\n");
    } else {
        printf("NÃO APOSENTADO\n");
    }

    return 0;
}
