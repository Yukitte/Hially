#include <stdio.h>

main(){

    int vetor[5], qtdPares=0;

    for(int i = 0; i < 5; i++){
        printf("\nDigite os valores");
        scanf("%d", &vetor[i]);
        if(vetor[i] % 2 == 0){
            printf("\nNumero par!!");
            qtdPares++;
        }else{
            printf("\nNumero Impar!!");
        }
    }
    printf("Total de pares: %d", qtdPares);

}